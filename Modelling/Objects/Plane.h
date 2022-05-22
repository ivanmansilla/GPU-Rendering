#ifndef PLANE_H
#define PLANE_H

#include <library/Common.h>
#include <library/vec.h>
#include <library/mat.h>

#include <QGLShaderProgram>

#include <stdio.h>

#include <Modelling/Materials/Material.h>


const int NumVertices = 6; //(1 faces)(2 triangles/face)(3 vertices/triangle)

typedef vec4  color4;
typedef vec4 point4;

class Plane
{
public:
    Plane();
    Plane(int an, int al, int profu, GLfloat x0, GLfloat y0, GLfloat z0);
    ~Plane();
    void make();
    void toGPU(QGLShaderProgram *program);
    void draw();
    void aplicaTG(mat4 m);

private:

    void quad( int a, int b, int c, int d );

    int a; // amplada
    int h; // alcada
    int p; // profunditat
    GLdouble xorig, yorig, zorig;

    point4 vertices[8]; // 8 vertexs del cub
    color4 vertex_colors[8]; // 8 colors RGBA associats a cada vertex

    int Index;
    point4 points[NumVertices]; // 6 punts: cub triangulat
    color4 colors[NumVertices]; // colors en aquests punts

    GLuint buffer;


#endif // PLANE_H

