#include "Modelling/Scene.h"

/**
 * @brief Scene::Scene
 */
Scene::Scene() {
    // Inicialització de la capsa minima
    capsaMinima.pmin = vec3(-1.0, -1.0,-1.0);
    capsaMinima.a = 2;
    capsaMinima.h = 2;
    capsaMinima.p = 2;
    lightAmbientGlobal = vec3(0.2, 0.2, 0.2);


}

/**
 * @brief Scene::~Scene
 */
Scene::~Scene() {
    objects.clear();
    lights.clear();
}

/**
 * @brief Scene::addObject
 * @param obj
 */
void Scene::addObject(shared_ptr<Mesh> obj) {
    objects.push_back(obj);
    calculCapsaMinCont3DEscena();
}

/**
 * @brief Scene::toGPU
 */
void Scene::toGPU(shared_ptr<QGLShaderProgram> p) {
    for(unsigned int i=0; i < objects.size(); i++){
        objects.at(i)->toGPU(p);
    }
}

/**
 * @brief Scene::draw
 */
void Scene::draw() {
    for(unsigned int i=0; i < objects.size(); i++){
        objects.at(i)->draw();
    }
}


/**
 * @brief Scene::getLightActual
 * @return
 */
shared_ptr<Light> Scene::getLightActual() {
    // TO DO OPCIONAL: A modificar si es vol canviar el comportament de la GUI
    // Ara per ara dona com a Light actual la darrera que s'ha inserit
    return (lights[lights.size()-1]);
}

/**
 * @brief Scene::setLightActual
 * @param l
 */
void Scene::setLightActual(shared_ptr<Light> l){
    lights[lights.size()-1]=l;
}



/**
 * @brief Scene::lightsToGPU
 * @param program
 */
void Scene::lightsToGPU(shared_ptr<QGLShaderProgram> program){
// TO DO: A implementar a la fase 1 de la practica 2
    struct gl_IdLlums
    {
        GLuint ia;
        GLuint id;
        GLuint is;
        GLuint coef;
        GLuint lightPosition;
    };

    gl_IdLlums gl_IdVect[5];

    for(unsigned int i=0; i < lights.size(); i++){
        gl_IdVect[i].ia = program->uniformLocation(QString("conjunt[%1].ia").arg(i));
        gl_IdVect[i].id = program->uniformLocation(QString("conjunt[%1].id").arg(i));
        gl_IdVect[i].is = program->uniformLocation(QString("conjunt[%1].is").arg(i));
        gl_IdVect[i].coef = program->uniformLocation(QString("conjunt[%1].coef").arg(i));
        gl_IdVect[i].lightPosition = program->uniformLocation(QString("conjunt[%1].lightPosition").arg(i));

        glUniform3fv(gl_IdVect[i].ia, 1, lights[i]->getIa());
        glUniform3fv(gl_IdVect[i].id, 1, lights[i]->getId());
        glUniform3fv(gl_IdVect[i].is, 1, lights[i]->getIs());
        glUniform3fv(gl_IdVect[i].coef, 1, lights[i]->getCoeficients());
        glUniform4fv(gl_IdVect[i].lightPosition, 1, lights[i]->getLightPosition());
    }

}

void Scene::addLight(shared_ptr<Light> l) {
    lights.push_back(l);
}

/**
 * @brief Scene::setAmbientToGPU
 * @param program
 */
void Scene::setAmbientGlobalToGPU(shared_ptr<QGLShaderProgram> program){
    // TO DO: A implementar a la fase 1 de la practica 2
    GLuint ambientGlobalID;
    for(unsigned int i=0; i < lights.size(); i++){
        ambientGlobalID = program->uniformLocation(QString("lightAmbientGlobal").arg(i));
    }
    for(unsigned int i=0; i < lights.size(); i++){
        glUniform3fv(ambientGlobalID, 1, lightAmbientGlobal);
}
}

/**
 * @brief Scene::setCamera
 * @param Camera *
 */
void Scene::setCamera(shared_ptr<Camera> c) {
    camera = c;
}
/**
 * @brief Scene::calculCapsaMinCont3DEscena
 */

void Scene::calculCapsaMinCont3DEscena()
{
    Capsa3D c;
    vec3 pmax;

    if (objects.size()==1) {
        capsaMinima = objects[0]->calculCapsa3D();
        pmax[0] = capsaMinima.pmin[0]+capsaMinima.a;
        pmax[1] = capsaMinima.pmin[1]+capsaMinima.h;
        pmax[2] = capsaMinima.pmin[2]+capsaMinima.p;
    } else {
        capsaMinima.pmin[0]=200;
        capsaMinima.pmin[1]=200;
        capsaMinima.pmin[2]=200;
        pmax[0] = -200;
        pmax[1] = -200;
        pmax[2] = -200;
    }

    for (unsigned int i=0; i<objects.size(); i++) {
       c = objects[i]->calculCapsa3D();

       if (capsaMinima.pmin[0]>c.pmin[0]) capsaMinima.pmin[0] = c.pmin[0];
       if (capsaMinima.pmin[1]>c.pmin[1]) capsaMinima.pmin[1] = c.pmin[1];
       if (capsaMinima.pmin[2]>c.pmin[2]) capsaMinima.pmin[2] = c.pmin[2];
       if (pmax[0]<c.pmin[0]+c.a) pmax[0] = c.pmin[0]+c.a;
       if (pmax[1]<c.pmin[1]+c.h) pmax[1] = c.pmin[1]+c.h;
       if (pmax[2]<c.pmin[2]+c.p) pmax[2] = c.pmin[2]+c.p;
    }
    capsaMinima.a = pmax[0]-capsaMinima.pmin[0];
    capsaMinima.h = pmax[1]-capsaMinima.pmin[1];
    capsaMinima.p = pmax[2]-capsaMinima.pmin[2];
}

void Scene::update(int nframe) {
    for (unsigned int i = 0; i< objects.size(); i++) {
        if (dynamic_pointer_cast<Animable>(objects[i]) ) objects[i]->update(nframe);
    }
}
