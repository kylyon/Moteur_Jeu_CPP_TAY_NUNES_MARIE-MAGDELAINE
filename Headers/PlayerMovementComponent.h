//
// Created by Kyllian on 17/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PLAYERMOVEMENTCOMPONENT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PLAYERMOVEMENTCOMPONENT_H
#include "Component.h"
#include "Input.h"
#include "TransformComponent.h"

class PlayerMovementComponent : public Component {
private:
    TransformComponent* transform;
public:
    PlayerMovementComponent();
    PlayerMovementComponent(Object* obj);
    ~PlayerMovementComponent();

    void Update() override;
    int GetInstance() override;
    string getType() const override;
    static const int instance_component = 2;

};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PLAYERMOVEMENTCOMPONENT_H
