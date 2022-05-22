#version 330

layout (location = 0) in vec4 vPosition;
layout (location = 1) in vec4 vColor;
layout (location = 2) in vec4 vNormal;

struct StLlums {
    vec3 ia;
    vec3 id;
    vec3 is;
    vec3 coef;
    vec4 lightPosition;
};

struct StMaterial {
    vec3 ka;
    vec3 kd;
    vec3 ks;
    float shininess;
    float opacity;
    float nut;
};

uniform vec3 lightAmbientGlobal;
uniform StLlums conjunt[5];
uniform StMaterial material;
uniform mat4 model_view;
uniform mat4 projection;
uniform vec4 obs;

out vec4 color;

void main() {
    gl_Position = projection*model_view*vPosition;
    gl_Position = gl_Position/gl_Position.w;

    vec4 N = normalize(vNormal);
    vec4 L = normalize(conjunt[0].lightPosition - vPosition);

    float difusa = max(dot(N, L), 0.0);
    vec4 R = reflect(-L, N);
    vec4 V = normalize(obs-vPosition);
    float angleSpec = max(dot(R, V), 0.0);
    float especular = pow(angleSpec, material.shininess);
    color = vec4(material.ka * conjunt[0].ia + material.kd * difusa * conjunt[0].id + material.ks * especular * conjunt[0].is, 1.0);
}
