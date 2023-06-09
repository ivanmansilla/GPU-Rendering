#include "SceneFactory.h"

SceneFactory::SCENE_TYPES SceneFactory::getSceneFactoryType(QString name) {
    if (name == "VIRTUALWORLD") return SCENE_TYPES::VIRTUALWORLD;
    else if (name == "REALDATA") return SCENE_TYPES::REALDATA;
    else if (name == "TEMPORALVW") return SCENE_TYPES::TEMPORALVW;
    else if (name == "TEMPORALDATA") return SCENE_TYPES::TEMPORALDATA;
    else return SCENE_TYPES::VIRTUALWORLD;
}

QString SceneFactory::getNameType(SCENE_TYPES t) const {
    switch (t) {
    case VIRTUALWORLD:
        return (QString("VIRTUALWORLD"));
        break;
    case REALDATA:
        return (QString("REALDATA"));
        break;
    case TEMPORALVW:
        return (QString("TEMPORALVW"));
        break;
    case TEMPORALDATA:
        return (QString("VIRTUALWORLD"));
        break;
    default:
        return (QString("VIRTUALWORLD"));
        break;
    }
}
