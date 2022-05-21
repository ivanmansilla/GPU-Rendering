#include "ScaleTG.h"

ScaleTG::ScaleTG(vec3 scal): scale(scal)
{
    //matTG = scale(mat4(1.0f), scale);
    matTG = Scale(scale);
}

ScaleTG::~ScaleTG()
{

}
