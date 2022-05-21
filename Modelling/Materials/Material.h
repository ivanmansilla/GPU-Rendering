#pragma once

#include <iostream>
#include <memory>

#include <library/Common.h>
using namespace Common;

#include <QGLShaderProgram>
#include <DataSettings/Serializable.h>
#include <vector>
#include <library/vec.h>

using namespace std;


// Tipus de Materials
enum MaterialType {Lambertian,Metal,Transparent};

// TO DO: A canviar a la fase 1 de la practica 2
// Classe que representa els materials d'un objecte
class Material: public Serializable{


public:
    Material();
    Material(vec3 d);
    Material(vec3 a, vec3 d, vec3 s, float shininess);
    Material(vec3 a, vec3 d, vec3 s, float shininess, float opacity);
    Material(vec3 a, vec3 d, vec3 s, float shininess, float opacity,MaterialType type);
    ~Material();

    vec3 getAttenuation(/*const Ray& r_in, const HitInfo& rec*/) const;
    bool getOneScatteredRay(/*const Ray& r_in, const HitInfo& rec, Ray& r_out*/) const;
    bool getMultipleScatteredRays(/*const Ray& r_in, const HitInfo& rec, std::vector<Ray>& r_out*/) const;
    vec3 getDiffuse(vec2 point) const;
    vec3 getColorPixel(vec2 uv) const;

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

private:

    MaterialType type;

    MaterialType getTypeFromString(QString type) const;
    QString getStringFromType(MaterialType type) const;


};

