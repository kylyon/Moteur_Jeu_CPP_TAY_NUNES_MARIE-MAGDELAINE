//
// Created by Raf on 16/03/2023.
//

#include "../Headers/Factory.h"

std::unique_ptr<Component> Factory::createComponent(const std::string& type, Object* obj) {
    if (type == "PhysicsComponent") {
        return std::make_unique<PhysicsComponent>(obj);
    }
    if (type == "TransformComponent") {
        return std::make_unique<TransformComponent>(obj);
    }
    if (type == "PlayerMovementComponent") {
        return std::make_unique<PlayerMovementComponent>(obj);
    }

    return nullptr;
}