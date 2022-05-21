#version 330

layout (location = 0) in vec4 vPosition;
layout (location = 2) in  vec4 vNormal;

uniform mat4 model_view;
uniform mat4 projection;

out vec4 normal;
out vec4 v_position;

void main()
{
    gl_Position = projection*model_view*vPosition;
    gl_Position = gl_Position/gl_Position.w;

    v_position = vPosition;
    normal = vNormal;
}
