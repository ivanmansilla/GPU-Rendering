#version 330


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
uniform vec4 obs;
uniform sampler2D textMap;

in vec4 v_position;
in vec4 normal;
in vec2 v_texcoord;
out vec4 colorOut;


void main()
{
    vec4 N = normalize(normal);
    vec4 L = normalize(conjunt[0].lightPosition - v_position);
    vec3 colorTexture = texture(textMap,v_texcoord).rgb;

    float lambertian = max(dot(N, L), 0.0);
    float specular = 0.0;
    if(lambertian > 0.0) {
        vec4 R = reflect(-L, N);
        vec4 V = normalize(obs-v_position);
        float angleSpec = max(dot(R, V), 0.0);
        specular = pow(angleSpec, material.shininess);
    }
    vec3 diffuse=vec3(0.25 * material.kd * lambertian * conjunt[0].id) + (colorTexture*0.75);

    colorOut = vec4(material.ka * conjunt[0].ia +
            diffuse +
            material.ks * specular * conjunt[0].is, 1.0);
}

