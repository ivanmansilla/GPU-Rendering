#ifndef Object_H
#define Object_H

#include <QObject>
#include <vector>
#include <memory>

#include <library/Common.h>
using namespace Common;

#include <QGLShaderProgram>
#include <QOpenGLTexture>

#include <QFile>
#include <QRegularExpression>
#include <QDebug>
#include <QString>
#include <QStringList>

#include <Modelling/TG/TG.h>
#include <Modelling/Animation.h>
#include <Modelling/Objects/Cara.h>
#include <Modelling/Materials/Material.h>

typedef vec4  point4;
typedef vec2  point2;

// Classe que conte la representacio d'un Objecte: geometria, topologia, material i textures
class Mesh : public QObject, public Animable {

    Q_OBJECT
protected:
    QString nom;
    vector<Cara> cares;
    vector<point4> vertexs;
    vector<point4> normalsVertexs;
    vector<vec2>   textVertexs;

    // Estructures per passar a la GPU
    GLuint buffer;
    GLuint vao;

    int     numPoints;
    point4 *points;
    point4 *normals;
    point2 *textVs;

    // Els colors s'usen en la primera execució però després son prescindibles
    point4 *colors;

    int Index; // index de control del numero de vertexs a passar a la GPU

    shared_ptr<QGLShaderProgram> program;

    shared_ptr<QOpenGLTexture> texture;


public:

    Mesh(const int npoints, QObject *parent = 0);
    Mesh(const int npoints, QString n);
    ~Mesh();

    void parseObjFile(const QString &fileName);

    void setTexture(shared_ptr<QOpenGLTexture> t);

    virtual void make();
    virtual void toGPU(shared_ptr<QGLShaderProgram> p);
    void toGPUTexture(shared_ptr<QGLShaderProgram> program);
    virtual void draw();

    void setMaterial(Material material);

    Capsa3D calculCapsa3D();

    virtual void aplicaTG(shared_ptr<TG> tg);



private:
    void initTexture();
    void drawTexture();
    Material material;
};



#endif // Object_H
