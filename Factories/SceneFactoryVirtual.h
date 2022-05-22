#ifndef SCENEFACTORYVIRTUAL_H
#define SCENEFACTORYVIRTUAL_H

#include "Factories/SceneFactory.h"

class SceneFactoryVirtual : public SceneFactory
{
public:
    SceneFactoryVirtual();

    virtual shared_ptr<Scene> createScene(Serializable::SaveFormat saveFormat, QString fileName) override;

    virtual void read(const QJsonObject &json) override;
    virtual void write(QJsonObject &json) const override;
    virtual void print(int indentation) const override;

    virtual void oneSphere(Scene* s) const override;

    bool load(Serializable::SaveFormat saveFormat, QString fileName);
    bool save(Serializable::SaveFormat saveFormat, QString fileName) const;

};

#endif // SCENEFACTORYVIRTUAL_H
