//
// Created by Raf on 16/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PHYSICSCOMPONENT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PHYSICSCOMPONENT_H
#include "Component.h"

class PhysicsComponent : public Component {
public:
    std::string getType() const override;
};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_PHYSICSCOMPONENT_H
