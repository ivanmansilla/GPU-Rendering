#ifndef SCALETG_H
#define SCALETG_H


#include <library/Common.h>
#include "TG.h"

class ScaleTG : public TG
{
public:
    vec3 scale;
    ScaleTG(vec3 scal);
    virtual ~ScaleTG();
};
#endif // SCALETG_H
