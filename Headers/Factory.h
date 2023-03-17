//
// Created by Raf on 16/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_FACTORY_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_FACTORY_H

#include <memory>
#include <string>
#include "Component.h"
#include "PhysicsComponent.h"
#include "TransformComponent.h"
#include "PlayerMovementComponent.h"

class Factory {
    public:
        static std::unique_ptr<Component> createComponent(const std::string& type, Object* obj);
};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_FACTORY_H
