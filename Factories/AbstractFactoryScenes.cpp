#include "AbstractFactoryScenes.h"

shared_ptr<SceneFactory> AbstractFactoryScenes::getSceneFactory(Serializable::SaveFormat saveFormat, QString fileName) {
    // Carreguem el fitxer
    QFile loadFile(fileName);
    if (!loadFile.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open the scene file");
        return nullptr;
    }

    // Llegim el fitxer
    QByteArray saveData = loadFile.readAll();
    QJsonParseError error;
    QJsonDocument loadDoc(QJsonDocument::fromJson(saveData, &error));

    if (loadDoc.isNull()) {
        qWarning("Parse error in json scene file");
        return nullptr;
    }
    // El carreguem en un objecte JSON
    QJsonObject json = loadDoc.object();

    SceneFactory::SCENE_TYPES currentType;
    if (json.contains("typeScene") && json["typeScene"].isString()) {
        currentType = SceneFactory::getSceneFactoryType(json["typeScene"].toString());
        shared_ptr<SceneFactory> sf;
        switch (currentType) {
        case SceneFactory::SCENE_TYPES::VIRTUALWORLD:
            sf = make_shared<SceneFactoryVirtual>();
            break;
        case SceneFactory::SCENE_TYPES::REALDATA:
            // TODO: return SceneFactoryData
            break;
        case SceneFactory::SCENE_TYPES::TEMPORALVW:
            sf = make_shared<SceneFactoryVirtual>();
            break;
        case SceneFactory::SCENE_TYPES::TEMPORALDATA:
            // TODO: return SceneFactoryData
            break;
        default:
            sf = make_shared<SceneFactoryVirtual>();
            break;
        }

        QTextStream(stdout) << "Loaded format of the scene using"
                            << (saveFormat != Serializable::Json ? "CBOR" : "JSON") << "...\n";

        return sf;
    } else {
        qWarning("Parse error in json scene: Undefined scene format");
        return nullptr;
    }
}
