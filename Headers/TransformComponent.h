//
// Created by kylli on 16/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TRANSFORMCOMPONENT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TRANSFORMCOMPONENT_H
#include "Component.h"

class TransformComponent : public Component {
public:
    float positionX, positionY, positionZ;
    float rotationX, rotationY, rotationZ;
    float scaleX, scaleY, scaleZ;

public:
    TransformComponent();
    std::string getType() const override;
    void Translate(float positionX, float positionY, float positionZ);
    void Rotate(float rotationX, float rotationY, float rotationZ);
    void Scale(float scaleX, float scaleY, float scaleZ);

};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TRANSFORMCOMPONENT_H
