#version 330

out vec4 colorOut;

void main()
{
    float depth = (gl_FragCoord.z - 0.1) / (1.0 - 0.1);
    colorOut = vec4(vec3(depth), 1.0);
}
