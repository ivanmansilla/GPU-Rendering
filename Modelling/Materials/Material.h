#pragma once

#include <QGLShaderProgram>
#include <memory>
#include <DataSettings/Serializable.h>
#include <vector>

using namespace std;
// TO DO: A canviar a la fase 1 de la practica 2
// Classe que representa els materials d'un objecte
class Material: public Serializable{


public:
    Material();

    void toGPU(shared_ptr<QGLShaderProgram> program);
    virtual void read (const QJsonObject &json);
    virtual void write (QJsonObject &json) const;
    virtual void print (int indentation) const;

    vec3 Ka;
    vec3 Kd;
    vec3 Ks;
    vec3 Kt;

    float shininess;
    float opacity;
    float nut;

};

