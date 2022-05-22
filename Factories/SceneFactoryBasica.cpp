#include "SceneFactoryBasica.h"

SceneFactoryBasica::SceneFactoryBasica(): SceneFactory()
{

}

void SceneFactoryBasica::OneSphere(Scene *s){
    QString s1("://resources/models/sphere1.obj");
    obj=make_shared<Mesh>(100000,s1);

    anim=make_shared<Animation>();
    anim->transf=make_shared<TranslateTG>(vec3(0.2));
    obj->addAnimation(anim);

    s->addObject(obj);
}
