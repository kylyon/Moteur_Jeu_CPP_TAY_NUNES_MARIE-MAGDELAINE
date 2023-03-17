//
// Created by Raf on 16/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PHYSICSCOMPONENT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PHYSICSCOMPONENT_H
#include "Component.h"

class PhysicsComponent : public Component {
public:
    PhysicsComponent(Object* obj);
    std::string getType() const override;
    int GetInstance() override;
    static const int instance_component = 3;
};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PHYSICSCOMPONENT_H
