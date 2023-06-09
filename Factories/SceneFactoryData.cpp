﻿#include "SceneFactoryData.h"

SceneFactoryData::SceneFactoryData(shared_ptr<InfoMapping> mr):SceneFactory()
{
    mapping = mr;
}


shared_ptr<Scene> SceneFactoryData::createScene(Serializable::SaveFormat saveFormat, QString nameFile) {
    scene= make_shared<Scene>();
    load(saveFormat, nameFile);
    print(0);
    return buildVirtualScene();
}


shared_ptr<Scene> SceneFactoryData::createScene() {
    auto scene= make_shared<Scene>();
    //  TODO: Només si voleu provar manualment algunes dades posades
    //  hardcoded aqui

    return scene;
}


//! [3]
bool SceneFactoryData::load(SceneFactory::SaveFormat saveFormat, QString nameFile)
{
    QFile loadFile(saveFormat == Json
        ? QString(nameFile.append(".json"))
        : QString(nameFile.append(".dat")));
    if (!loadFile.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open the virtual scene file.");
        return false;
    }

    QByteArray saveData = loadFile.readAll();
    QJsonParseError error;
    QJsonDocument loadDoc( QJsonDocument::fromJson(saveData, &error));


    if (loadDoc.isNull()) {
        qWarning("Parse error in json data scene file.");
        return false;
    }
    QJsonObject object = loadDoc.object();
    read(object);

    QTextStream(stdout) << "Loaded data scene using "
                        << (saveFormat != Json ? "CBOR" : "JSON") << "...\n";
    return true;
}
//! [3]

//! [4]
bool SceneFactoryData::save(Serializable::SaveFormat saveFormat, QString nameFile) const
{
    QFile saveFile(saveFormat == Json
                   ? QString(nameFile.append(".json"))
                   : QString(nameFile.append(".dat")));

    if (!saveFile.open(QIODevice::WriteOnly)) {
        qWarning("Couldn't open data file.");
        return false;
    }

    QJsonObject setUpObject;
    write(setUpObject);
    saveFile.write(QJsonDocument(setUpObject).toJson());

    return true;
}

//! [0]
void SceneFactoryData::read(const QJsonObject &json)
{
    if (json.contains("scene") && json["scene"].isString())
        //scene->name = json["scene"].toString();
    if (json.contains("typeScene") && json["typeScene"].isString())
        currentType = getSceneFactoryType(json["typeScene"].toString());

    if (json.contains("base") && json["base"].isObject()) {
        QJsonObject jbase = json["base"].toObject();
        shared_ptr<Mesh> o;
        if (jbase.contains("type") && jbase["type"].isString()) {
            QString objStr = jbase["type"].toString().toUpper();
            //o = ObjectFactory::getInstance().createObject(ObjectFactory::getInstance().getObjectType(objStr));
            //o->read(jbase);
            // Quan tinguem el fittedplane crearem un fittedplane igual que creem la mesh, y sera el baseObj
            //scene->baseObj = o;
        }
    }
    mapping = make_shared<InfoMapping>();
    mapping->read(json);

}
//! [0]

void SceneFactoryData:: write(QJsonObject &json) const
{
   //json["scene"] = scene->name;
   json["typeScene"] = SceneFactory::getNameType(currentType);

   QJsonObject jbase;
   // TO DO Fase 1: Cal escriure l'objecte base a fitxer: Descomenta les següents línies
   //scene->baseObj->write(jbase);
   //auto value = ObjectFactory::getInstance().getIndexType(scene->baseObj);
   //jbase["type"]  = ObjectFactory::getInstance().getNameType(value);

   json["base"] = jbase;

    mapping->write(json);
}

void SceneFactoryData::print(int indentation) const
{
    const QString indent(indentation * 2, ' ');
    //QTextStream(stdout) << indent << "scene:\t" << scene->name << "\n";
    QTextStream(stdout) << indent << "typeScene:\t" << SceneFactory::getNameType(currentType) << "\n";
    QTextStream(stdout) << indent << "base:\t\n";
    //scene->baseObj->print(indentation +2);
    mapping->print(indentation+2);
}

shared_ptr<Scene> SceneFactoryData::buildVirtualScene() {
    // TO DO: A partir de les dades carregades, cal contruir l'escena virtual amb tot colocat al seu lloc
    // i a la seva mida
    for (unsigned int i=0; i<mapping->props.size(); i++) {
        // A props[i].first es te la informació de la propietat per fer el mapping de cada valor
         shared_ptr<PropertyInfo> propinfo = mapping->props[i].first;
         // Per cada valor, es dona d'alta un objecte a l'escena
         for (unsigned int j=0; j<mapping->props[i].second.size(); j++) {
             // TO DO Fase 2:
             // col.locació de l'objecte base de l'escena
             //
             // Col.locació de l'objecte o gizmo del valor de la dada al Mon Virtual
             //  TODO Fase 2: Cal calcular l'escalat del gizmo segons el valor llegit
             //QString s = ObjectFactory::getInstance().getNameType(propinfo->gyzmo);
             shared_ptr<Mesh> o;
             /*o = ObjectFactory::getInstance().createObject(s, mapping->props[i].second[j][2],
                     propinfo->gyzmo);*/
             //TODO ESTO LO HAGO EN EL PROPERTYINFO DONDE GYZMO PERO CON UNO QUE SEA EL .OBJ DE LA MESH CON UN STRING Y AQUI LLAMAARLO
             shared_ptr<Mesh> mesh = make_shared<Mesh>(100000, propinfo->fileName);

             //Traslladem y escalem la mesh
             vec3 puntMonReal(mapping->props[i].second[j][0], mapping->props[i].second[j][1], mapping->props[i].second[j][2]);
             shared_ptr<TranslateTG> tg = translacioGizmo(propinfo, mapping, puntMonReal);
             shared_ptr<ScaleTG> sg = escalatGizmo(propinfo, mapping, mapping->props[i].second[j][2]);
             o->aplicaTG(tg);
             o->aplicaTG(sg);
             // Afegir la Mesh a l'escena
             scene->objects.push_back(o);
           /*  o->setMaterial(mapeigMaterial(propinfo, propinfo->colorMapType,
                                           MaterialFactory::getInstance().getIndexType(propinfo->material),
                                           mapping->props[i].second[j][2]));*/


         }
    }
    return scene;
}
/*
vec3 SceneFactoryData::getPuntBase(ObjectFactory::OBJECT_TYPES gyzmo, vec2 puntReal) {
    if (gyzmo == ObjectFactory::FITTEDPLANE || gyzmo == ObjectFactory::PLANE) {
        return vec3(puntReal.x, 0.0, puntReal.y);
    } else if(gyzmo == ObjectFactory::SPHERE) {
        float lon = -puntReal.x * glm::pi<float>() / 180;
        float lat = puntReal.y * glm::pi<float>() / 180;
        float r = 1.0f;
        vec3 centre(puntReal.x, 0.0, puntReal.y);
        return vec3(r * cos(lat) * cos(lon) + centre.x, r * sin(lat) + centre.y, r * cos(lat) * sin(lon) + centre.z);
    }
    return vec3(0);
}*/


// TODO: Fase 2
// Cal implementar aquests mètodes i usar-lo
shared_ptr<TranslateTG> SceneFactoryData::translacioGizmo(shared_ptr<PropertyInfo> propinfo, shared_ptr<InfoMapping> infomap, vec3 puntMonReal) {
        float oldX = (infomap->Rxmax - infomap->Rxmin);
        float newX = (infomap->Vxmax - infomap->Vxmin);
        float newValueX = (((puntMonReal[0] - infomap->Rxmin)*newX)/oldX + infomap->Vxmin);

        float oldZ = (infomap->Rzmax - infomap->Rzmin);
        float newZ = (infomap->Vzmax - infomap->Vzmin);
        float newValueY = (((puntMonReal[1] - infomap->Rzmin)*newZ)/oldZ + infomap->Vzmin);

        vec3 puntMonVirtual(newValueX, 0.0, newValueY);

        shared_ptr<TranslateTG> matTranslacio = make_shared<TranslateTG>(puntMonVirtual);
        return matTranslacio;
}

shared_ptr<ScaleTG> SceneFactoryData::escalatGizmo(shared_ptr<PropertyInfo> propinfo, shared_ptr<InfoMapping> infomap, float valorMonReal) {
    float objecteScale = (valorMonReal - propinfo->minValue)/(propinfo->maxValue - propinfo->minValue);
    //float norObj = normalize(objecteScale);
    float oldY = (propinfo->maxValue - propinfo->minValue);
    float newY = (infomap->Vymax - infomap->Vymin);
    float newValue = (((valorMonReal - propinfo->minValue)*newY)/oldY + infomap->Vymin);
    //float escala = (0.25*((newValue))*(norObj+0.01));
    float escala = (0.25*((newValue))*(0.51));
    vec3 scale(escala, escala, escala);
    shared_ptr<ScaleTG> matScale = make_shared<ScaleTG>(scale);
    return matScale;
}
/*
shared_ptr<Material> SceneFactoryData::mapeigMaterial(shared_ptr<PropertyInfo> propinfo, ColorMapStatic::COLOR_MAP_TYPES tCM, MaterialFactory::MATERIAL_TYPES tMat, double valorMonReal) {

    // TO DO Fase 2: Cal mapejar el color difus al color de la paleta o ColorMap segons el valorMonReal i
    // els valors minims i maxims de les propietats
    // Tens els valors minims i maxim de cada propietat a l'estructura de setup d'aquesta classe

    auto cm = make_shared<ColorMapStatic>(tCM);
    int idx = (int)(255.0*(valorMonReal-propinfo->minValue)/(propinfo->maxValue-propinfo->minValue));
    return MaterialFactory::getInstance().createMaterial(propinfo->material->Ka,
                                                         cm->getColor(idx),
                                                         propinfo->material->Ks,
                                                         propinfo->material->shininess,
                                                         propinfo->material->opacity, tMat);
}*/
