#include "PropertyInfo.h"

PropertyInfo::PropertyInfo()
{
}



//! [0]
void PropertyInfo::read(const QJsonObject &json)
{
    if (json.contains("name") && json["name"].isString()) {
        name = json["name"].toString().toUpper();
    }
    /*if (json.contains("gyzmo") && json["gyzmo"].isString()) {
        QString objStr = json["gyzmo"].toString().toUpper();
        gyzmo = ObjectFactory::getInstance().getObjectType(objStr);
    }*/
    // Mirem els objectes del JSON
    if (json.contains("objects") && json["objects"].isArray()) {
        QJsonArray objectsArray = json["objects"].toArray();

        // Recorrem els objectes del JSON
        for (int i = 0; i < objectsArray.size(); i++) {
            QJsonObject meshObj = objectsArray[i].toObject();

            if (meshObj.contains("objFileName") && meshObj["objFileName"].isString()) {
                fileName = meshObj["objFileName"].toString();
            }
        }
    }
    if (json.contains("minValue") && json["minValue"].isDouble()) {
        minValue = json["minValue"].toDouble();
    }
    if (json.contains("maxValue") && json["maxValue"].isDouble()) {
        maxValue = json["maxValue"].toDouble();
    }
    if (json.contains("material") && json["material"].isObject()) {
        QJsonObject auxMat = json["material"].toObject();
        if (auxMat.contains("type") && auxMat["type"].isString()) {
            QString tipus = auxMat["type"].toString().toUpper();
            //MaterialFactory::MATERIAL_TYPES t = MaterialFactory::getInstance().getMaterialType(tipus);
            //material = MaterialFactory::getInstance().createMaterial(t);
            //material->read(auxMat);
        }
    }
    if (json.contains("colorMap") && json["colorMap"].isString()) {
        QString objStr = json["colorMap"].toString().toUpper();
        //colorMapType = ColorMapStatic::getColorMapType(objStr);
    }

}
//! [0]

void PropertyInfo:: write(QJsonObject &json) const
{
    json["name"] = name;
    json["minValue"] = minValue;
    json["maxValue"] = maxValue;

    QJsonObject materialObject;
   /* auto  value = MaterialFactory::getInstance().getIndexType (material);
    QString className2 = MaterialFactory::getInstance().getNameType(value);*/

    //material->write(materialObject);
    //materialObject["type"] = className2;
    json["material"] = materialObject;
    //json["colorMap"] = ColorMapStatic::getNameType(colorMapType);
}

void PropertyInfo::print(int indentation) const
{
    const QString indent(indentation * 2, ' ');
    QTextStream(stdout) << indent << "name:\t" << name << "\n";
    QTextStream(stdout) << indent << "minValue:\t" << minValue << "\n";
    QTextStream(stdout) << indent << "minValue:\t" << maxValue << "\n";

    QTextStream(stdout) << "material:" << "\n";
   // auto  value = MaterialFactory::getInstance().getIndexType (material);
   // QString className = MaterialFactory::getInstance().getNameType(value);
    //QTextStream(stdout) << indent << "type:\t" << className<<"\n";
    //material->print(indentation+2);
   // QTextStream(stdout) << indent <<"colorMap:\t"<<ColorMapStatic::getNameType(colorMapType)<<"\n";
 }
