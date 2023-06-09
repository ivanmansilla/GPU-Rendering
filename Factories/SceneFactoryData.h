#ifndef SCENEFACTORYDATA_H
#define SCENEFACTORYDATA_H


#include "Modelling/Materials/ColorMapStatic.h"
#include "Modelling/Materials/Material.h"
#include "SceneFactory.h"
#include "DataSettings/InfoMapping.h"

class SceneFactoryData : public SceneFactory
{
    shared_ptr<InfoMapping> mapping;

public:
    SceneFactoryData() {};
    SceneFactoryData(shared_ptr<InfoMapping> mapping);
    virtual shared_ptr<Scene>  createScene(Serializable::SaveFormat saveFormat, QString nomFitxer) override;
    virtual shared_ptr<Scene>  createScene();

    virtual void read(const QJsonObject &json) override;
    virtual void write(QJsonObject &json) const override;
    virtual void print(int indentation) const override;

    bool load(Serializable::SaveFormat saveFormat, QString nameFile);
    bool save(Serializable::SaveFormat saveFormat, QString nameFile) const;

    //vec3 getPuntBase(ObjectFactory::OBJECT_TYPES gyzmo, vec2 puntReal);
    // TODO: Fase 2: Translada del Gizmo
    shared_ptr<TranslateTG> translacioGizmo(shared_ptr<PropertyInfo>  propinfo, shared_ptr<InfoMapping> infomap, vec3 puntMonReal);
    // TODO: Fase 2: Escala del Gizmo
    shared_ptr<ScaleTG> escalatGizmo(shared_ptr<PropertyInfo> propinfo, shared_ptr<InfoMapping> infomap, float valorMonReal);
   // shared_ptr<Material> mapeigMaterial(shared_ptr<PropertyInfo> propinfo, ColorMapStatic::COLOR_MAP_TYPES tCM, MaterialFactory::MATERIAL_TYPES tMat, double valorMonReal);

    shared_ptr<Scene> buildVirtualScene();
};
#endif // SCENEFACTORYDATA_H
