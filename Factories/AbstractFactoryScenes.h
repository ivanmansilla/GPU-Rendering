#ifndef ABSTRACTFACTORYSCENES_H
#define ABSTRACTFACTORYSCENES_H

#include "SceneFactory.h"
#include "SceneFactoryVirtual.h"


class AbstractFactoryScenes
{
    AbstractFactoryScenes() {};
public:
    static AbstractFactoryScenes& getInstance() {
        static AbstractFactoryScenes instance;
        return instance;
    }

    shared_ptr<SceneFactory> getSceneFactory(Serializable::SaveFormat saveFormat, QString fileName);
};

#endif // ABSTRACTFACTORYSCENES_H
