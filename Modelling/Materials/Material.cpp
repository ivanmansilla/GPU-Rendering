#include "Modelling/Materials/Material.h"

Material::Material(): Ka(1.0f), Kd(1.0f), Ks(1.0f) {
    shininess = 1.0f;
    nut=1.0f;
    type=Lambertian;
}

Material::~Material()
{}

Material::Material(vec3 d) {
    Kd = d;
    Ka = vec3(1.0f, 1.0f, 1.0f);
    Ks = vec3(1.0f, 1.0f, 1.0f);
    shininess = 1.0f;
    type=Lambertian;
}

Material::Material(vec3 a, vec3 d, vec3 s, float shin) {
    Ka = a;
    Kd = d;
    Ks = s;
    shininess = shin;
    type=Lambertian;
}

Material::Material(vec3 a, vec3 d, vec3 s, float shin, float opac) {
    Ka = a;
    Kd = d;
    Ks = s;
    shininess = shin;
    opacity = opac;
    type=Lambertian;
}

Material::Material(vec3 a, vec3 d, vec3 s, float shin, float opac, MaterialType type) {
    Ka = a;
    Kd = d;
    Ks = s;
    shininess = shin;
    opacity = opac;
    this->type=type;
}


vec3 Material::getDiffuse(vec2 point) const {
     return getColorPixel(point);
}

vec3 Material::getColorPixel(vec2 uv) const {
    switch (type) {
    default: //Lambertian by default
        return Kd;
    }
}

vec3 Material::getAttenuation(/*const Ray& r_in, const HitInfo& rec*/) const  {
    switch (type) {
    default: //Lambertian by default
        return Kd;
    }
}

bool Material::getOneScatteredRay(/*const Ray& r_in, const HitInfo& rec, Ray& r_out*/) const  {
    switch (type) {
    default: //Lambertian by default
//        vec3 p0 = rec.p + FLT_EPSILON * r_in.getDirection();
//        vec3 target = p0 + rec.normal + Hitable::RandomInSphere();
//        r_out =  Ray(p0, target-rec.p);
        return true;
    }
}
bool Material::getMultipleScatteredRays(/*const Ray& r_in, const HitInfo& rec,  std::vector<Ray>& r_out*/) const  {
    switch (type) {
    Lambertian:
//        for (int i = 0; i < MULTIPLE_SCATTER_SAMPLES; i++) {
//            vec3 target = rec.p + rec.normal + Hitable::RandomInSphere();
//            r_out.push_back( Ray(rec.p, target-rec.p));
//        }
        return true;
    }

}

/**
 * Passa el material de CPU a GPU
 * @brief Material::toGPU
 * @param program
 */
void Material::toGPU(shared_ptr<QGLShaderProgram> program){
    struct{
            GLuint Ka;
            GLuint Kd;
            GLuint Ks;
            GLuint shininess;
            GLuint opacity;
            GLuint nut;

    }attributesMaterial;

    attributesMaterial.Ka = program->uniformLocation(QString("material.ka"));
    attributesMaterial.Kd = program->uniformLocation(QString("material.kd"));
    attributesMaterial.Ks = program->uniformLocation(QString("material.ks"));
    attributesMaterial.shininess = program->uniformLocation(QString("material.shininess"));
    attributesMaterial.opacity = program->uniformLocation(QString("material.opacity"));
    attributesMaterial.nut = program->uniformLocation(QString("material.nut"));

    glUniform3fv(attributesMaterial.Ka, 1, this->Ka);
    glUniform3fv(attributesMaterial.Kd, 1, this->Kd);
    glUniform3fv(attributesMaterial.Ks, 1, this->Ks);
    glUniform1f(attributesMaterial.shininess, this->shininess);
    glUniform1f(attributesMaterial.opacity, this->opacity);
    glUniform1f(attributesMaterial.nut, this->nut);
}

MaterialType Material::getTypeFromString(QString type) const{
   return Lambertian;
   //Todo implement other cases

}

QString Material::getStringFromType(MaterialType type) const{
   switch(type){
   //Todo implement other cases
    default:
       return "Lambertian";
   }
}


void Material::read (const QJsonObject &json)
{
    if (json.contains("ka") && json["ka"].isArray()) {
        QJsonArray auxVec = json["ka"].toArray();
        Ka[0] = auxVec[0].toDouble();
        Ka[1] = auxVec[1].toDouble();
        Ka[2] = auxVec[2].toDouble();
    }
    if (json.contains("kd") && json["kd"].isArray()) {
        QJsonArray auxVec = json["kd"].toArray();
        Kd[0] = auxVec[0].toDouble();
        Kd[1] = auxVec[1].toDouble();
        Kd[2] = auxVec[2].toDouble();
    }
    if (json.contains("ks") && json["ks"].isArray()) {
        QJsonArray auxVec = json["ks"].toArray();
        Ks[0] = auxVec[0].toDouble();
        Ks[1] = auxVec[1].toDouble();
        Ks[2] = auxVec[2].toDouble();
    }
    if (json.contains("kt") && json["kt"].isArray()) {
        QJsonArray auxVec = json["kt"].toArray();
        Kt[0] = auxVec[0].toDouble();
        Kt[1] = auxVec[1].toDouble();
        Kt[2] = auxVec[2].toDouble();
    }
    if (json.contains("shininess") && json["shininess"].isDouble())
        shininess = json["shininess"].toDouble();
    if (json.contains("opacity") && json["opacity"].isDouble())
        opacity = json["opacity"].toDouble();
    if (json.contains("nut") && json["nut"].isDouble())
        nut = json["nut"].toDouble();
    if (json.contains("type") && json["type"].isString())
        type = getTypeFromString(json["type"].toString());
}



//! [1]
void Material::write(QJsonObject &json) const
{
    QJsonArray auxArray;
    auxArray.append(Ka[0]);auxArray.append(Ka[1]);auxArray.append(Ka[2]);
    json["ka"] = auxArray;

    QJsonArray auxArray2;
    auxArray2.append(Kd[0]);auxArray2.append(Kd[1]);auxArray2.append(Kd[2]);
    json["kd"] = auxArray2;

    QJsonArray auxArray3;
    auxArray3.append(Ks[0]);auxArray3.append(Ks[1]);auxArray3.append(Ks[2]);
    json["ks"] = auxArray3;

    QJsonArray auxArray4;
    auxArray4.append(Kt[0]);auxArray4.append(Kt[1]);auxArray4.append(Kt[2]);
    json["kt"] = auxArray4;

    json["opacity"] = opacity;
    json["shininess"] = shininess;
    json["nut"] = nut;
    json["type"] = getStringFromType(type);
}

//! [1]

void Material::print(int indentation) const
{
    const QString indent(indentation * 2, ' ');

    QTextStream(stdout) << indent << "Ka:\t" << Ka[0] << ", "<< Ka[1] << ", "<< Ka[2] << "\n";
    QTextStream(stdout) << indent << "Kd:\t" << Kd[0] << ", "<< Kd[1] << ", "<< Kd[2] << "\n";
    QTextStream(stdout) << indent << "Ks:\t" << Ks[0] << ", "<< Ks[1] << ", "<< Ks[2] << "\n";
    QTextStream(stdout) << indent << "shininess:\t" << shininess<< "\n";
    QTextStream(stdout) << indent << "opacity:\t" << opacity<< "\n";
    QTextStream(stdout) << indent << "nut:\t" << nut<< "\n";
}
