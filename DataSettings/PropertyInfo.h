#ifndef PROPERTYINFO_H
#define PROPERTYINFO_H


#include "glm/glm.hpp"

#include "Serializable.h"
#include "Modelling/Materials/ColorMapStatic.h"
#include <Modelling/Objects/Mesh.h>

class PropertyInfo : public Serializable
{
public:
    PropertyInfo();
    virtual ~PropertyInfo() {};
    virtual void read(const QJsonObject &json) override;
    virtual void write(QJsonObject &json) const override;
    virtual void print(int indentation) const override;

    vec3 getPuntBase(shared_ptr<Mesh> base, vec2 puntReal);

    QString name;
    QString fileName;
    float minValue;
    float maxValue;
    //shared_ptr<Material> material;
};

#endif // PROPERTYINFO_H
