#version 330

layout (location = 0) in vec4 vPosition;
layout (location = 1) in vec4 vColor;

struct StLlums
{
    vec3 ia;
    vec3 id;
    vec3 is;
    vec3 coef;
    vec4 lightPosition;
};

struct StMaterial
{
    vec3 Ka;
    vec3 Kd;
    vec3 Ks;
    float shininess;
    float opacity;
    float nut;
};

uniform vec3 lightAmbientGlobal;
uniform StLlums conjunt[5];
uniform StMaterial material;
uniform mat4 model_view;
uniform mat4 projection;

out vec4 color;

void main()
{
    gl_Position = projection*model_view*vPosition;
    gl_Position = gl_Position/gl_Position.w;

    // Comprovacio que la llum es modificable desde interficie
    //color = vec4(conjunt[0].id, 1.0);

    // Comprovacio que funciona més d'una llum (descomentar les 2 llums de initGL a GLWidget)
    //color = vec4(conjunt[0].id + conjunt[1].id + conjunt[2].id, 1.0);

    color = vColor;
}
