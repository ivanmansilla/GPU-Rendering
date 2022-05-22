#ifndef SCENEFACTORY_H
#define SCENEFACTORY_H

#include <string.h>
#include <QString>

#include "DataSettings/Serializable.h"
#include "Modelling/Scene.h"

class SceneFactory : public Serializable
{
public:
    typedef enum {
        VIRTUALWORLD,
        REALDATA,
        TEMPORALVW,
        TEMPORALDATA
    } SCENE_TYPES;

    SceneFactory() {};
    virtual ~SceneFactory() {};

    virtual void oneSphere(Scene* s) const = 0;

    virtual shared_ptr<Scene> createScene(Serializable::SaveFormat saveFormat, QString fileName) = 0;

    static SCENE_TYPES getSceneFactoryType(QString name);
    QString getNameType(SCENE_TYPES t) const;

protected:
    shared_ptr<Scene> scene;
    SCENE_TYPES currentType;
};

#endif // SCENEFACTORY_H
