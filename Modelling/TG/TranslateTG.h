#ifndef TRANSLATETG_H
#define TRANSLATETG_H

#include <library/Common.h>
#include "TG.h"

class TranslateTG : public TG
{
public:
    vec3 traslation;
    TranslateTG(vec3 trasl);
    ~TranslateTG();
};

#endif // TRANSLATETG_H
