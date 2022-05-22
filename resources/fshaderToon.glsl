#version 330

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
uniform vec4 obs;

in vec4 v_position;
in vec4 normal;
out vec4 colorOut;

void main()
{
    float intensity;
    vec4 color;
    vec4 lightDir = normalize(conjunt[0].lightPosition - v_position);
    intensity = dot(lightDir , normalize(normal));

    if (intensity > 0.95)
            color = vec4(conjunt[0].id, 1.0);
    else if (intensity > 0.5)
            color = vec4((conjunt[0].id * 0.6), 1.0);
    else if (intensity > 0.25)
            color = vec4((conjunt[0].id * 0.4), 1.0);
    else
            color = vec4((conjunt[0].id * 0.2), 1.0);
    colorOut = color;
}

