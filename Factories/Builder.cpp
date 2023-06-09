#include "Factories/Builder.h"

#include "AbstractFactoryScenes.h"

Builder::Builder(GLWidget *glWid)
{
    glWidget = glWid;
    scene = glWidget->getScene();

}

void Builder::newObjFromFile()
{
    QString fileName = QFileDialog::getOpenFileName();
    if (!fileName.isNull()) {
        // OJO! El primer paràmetre de la constructora de l'Object és el número de punts del model.
        // Si l'objecte té més punts en el .bj, cal canviar aquest valor
        auto obj = make_shared<Mesh>(100000, fileName);
        scene->addObject(obj);
        scene->camera->actualitzaCamera(scene->capsaMinima);
        emit newObj(obj);
    }
}

void Builder::newVirtualScene() {
    // TO DO Fase 1: creació de la nova escena Virtual a partir d'un fitxer
    // de a partir d'un fitxer .json de tipus VIRTUAL.
    // El nom del fitxer es llegirà usant una finestra de diàleg
    // QFileDialog
    // Nomes es llegiran fitxers .json que continguin objectes tipus BoundaryObject.
    // Usa la teva SceneFactoryVirtual
    // per a construir l'escena tal i com feies a la practica 1

    QString fileName = QFileDialog::getOpenFileName();
    Serializable::SaveFormat format = Serializable::Json;

    shared_ptr<Scene> scene;
    if (!fileName.isNull()) {
        auto factory = AbstractFactoryScenes::getInstance().getSceneFactory(format, fileName);
        // Creem l'escena
        scene = factory->createScene(format, fileName);
        //animation
//        factory->oneSphere(scene.get());
//        scene->camera->actualitzaCamera(scene->capsaMinima);
        //animation
        auto l = make_shared<Light>(Puntual);
        scene->addLight(l);
    }

    emit newScene(scene);
}


void Builder::newDataScene()
{
    // TO DO Fase 1: Crear la nova escena a partir de les dades
    // del fitxer .json de tipus REALDATA
    // El nom del fitxer s'obtindrà amb un QFileDialog
    // Utilitza la teva SceneFactoryData per a llegir el fitxer
    // i crear l'escena corresponent.

    QString fileName = QFileDialog::getOpenFileName();
    Serializable::SaveFormat format = Serializable::Json;

    shared_ptr<Scene> scene;
    if (!fileName.isNull()) {
        auto factory = AbstractFactoryScenes::getInstance().getSceneFactory(format, fileName);
        // Creem l'escena
        scene = factory->createScene(format, fileName);

    }
    emit newScene(scene);
}

