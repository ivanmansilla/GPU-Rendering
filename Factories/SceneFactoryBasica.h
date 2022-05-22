#ifndef SCENEFACTORYBASICA_H
#define SCENEFACTORYBASICA_H

#include "SceneFactory.h"



class SceneFactoryBasica: public SceneFactory
{
public:
    SceneFactoryBasica();
    void OneSphere(Scene* s);
private:
    shared_ptr<Mesh> obj;
    shared_ptr<Animation> anim;
};

#endif // SCENEFACTORYBASICA_H
