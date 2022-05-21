#include "Modelling/TG/TranslateTG.h"

TranslateTG::TranslateTG(vec3 trasl): traslation(trasl)
{
    //matTG = Translate(mat4(1.0f), traslation);
    matTG = Translate(traslation);
}

TranslateTG::~TranslateTG()
{

}

