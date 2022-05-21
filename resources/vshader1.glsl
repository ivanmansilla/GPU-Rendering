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

uniform vec3 lightAmbientGlobal;
uniform StLlums conjunt[5];
uniform mat4 model_view;
uniform mat4 projection;

out vec4 color;

void main()
{
    gl_Position = projection*model_view*vPosition;
    gl_Position = gl_Position/gl_Position.w;

    // Comprovacio que funcionen les llums
    //color = (vec4(conjunt[0].id, 1.0)+vec4(conjunt[1].id, 1.0)+vec4(conjunt[2].id, 1.0));
    // Nose que posar perque les llums influeixin al color (supos que es el dels shaders)
    color = vColor;
}
