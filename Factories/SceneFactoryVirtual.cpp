#include "SceneFactoryVirtual.h"

SceneFactoryVirtual::SceneFactoryVirtual(): SceneFactory()
{}

shared_ptr<Scene> SceneFactoryVirtual::createScene(Serializable::SaveFormat saveFormat, QString fileName) {
    scene = make_shared<Scene>();
    load(saveFormat, fileName);
    print(0);

    return scene;
}

bool SceneFactoryVirtual::load(Serializable::SaveFormat saveFormat, QString fileName) {
    QFile loadFile(fileName);
    if (!loadFile.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open the virtual scene file.");
        return false;
    }

    QByteArray saveData = loadFile.readAll();
    QJsonParseError error;
    QJsonDocument loadDoc( QJsonDocument::fromJson(saveData, &error));

    if (loadDoc.isNull()) {
        qWarning("Parse error in json virtual scene file.");
        return false;
    }

    QJsonObject object = loadDoc.object();
    read(object);

    QTextStream(stdout) << "Loaded virtual scene using "
                        << (saveFormat != Json ? "CBOR" : "JSON") << "...\n";
    return true;
}

void SceneFactoryVirtual::read(const QJsonObject &json)
{
    if (json.contains("scene") && json["scene"].isString())
        // scene->name = json["scene"].toString();

    if (json.contains("typeScene") && json["typeScene"].isString())
        currentType = getSceneFactoryType(json["typeScene"].toString());

    // Mirem els objectes del JSON
    if (json.contains("objects") && json["objects"].isArray()) {
        QJsonArray objectsArray = json["objects"].toArray();

        // Recorrem els objectes del JSON
        for (int i = 0; i < objectsArray.size(); i++) {
            QJsonObject meshObj = objectsArray[i].toObject();

            if (meshObj.contains("objFileName") && meshObj["objFileName"].isString()) {
                QString fileName = meshObj["objFileName"].toString();
                // Creem la Mesh
                shared_ptr<Mesh> mesh = make_shared<Mesh>(100000, fileName); // ¿3? Preguntar

                // TODO: Llegir material

                // Afegim la Mesh
                scene->addObject(mesh);
            }
        }
    }
}

void SceneFactoryVirtual::write(QJsonObject &json) const {
    json["typeScene"] = SceneFactory::getNameType(currentType);

    QJsonArray objectsArray;
    for (shared_ptr<Mesh> &m : scene->objects) {
        QJsonObject object;
        object["type"] = "MESH";

        // TODO: Guardar material, nom fitxer, etc --> Practica 1
        objectsArray.append(object);
    }

    json["objects"] = objectsArray;
}

void SceneFactoryVirtual::print(int indentation) const {
    const QString indent(indentation * 2, ' ');
        // QTextStream(stdout) << indent << "scene:\t" << scene->name << "\n";
        QTextStream(stdout) << indent << "typeScene:\t" << getNameType(currentType) << "\n";

        QTextStream(stdout) << indent << "Objects:\t\n";
        for (unsigned int i = 0; i < scene->objects.size(); i++) {
            // auto value = ObjectFactory::getInstance().getIndexType (scene->objects[i]);
            // QString className = ObjectFactory::getInstance().getNameType(value);
            // QTextStream(stdout) << indent << "name:\t" << scene->objects[i]->name <<"\n";
            QTextStream(stdout) << indent << "type:\tMESH" << "\n";
            // scene->objects[i]->print(2);
        }
}
