#ifndef TG_H
#define TG_H


#include <library/Common.h>
#include <library/mat.h>
#include <library/vec.h>
using namespace Common;

class TG
{
public:
    mat4 matTG;
    TG();
    ~TG();
    virtual mat4 getTG();
};

#endif // TG_H
