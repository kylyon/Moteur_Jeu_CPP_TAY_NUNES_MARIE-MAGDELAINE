//
// Created by Raf on 16/03/2023.
//

#include "../Headers/Factory.h"
#include "../Headers/PhysicsComponent.h"
#include "../Headers/TransformComponent.h"

std::unique_ptr<Component> Factory::createComponent(const std::string& type) {
    if (type == "PhysicsComponent") {
        return std::make_unique<PhysicsComponent>();
    }
    if (type == "TransformComponent") {
        return std::make_unique<TransformComponent>();
    }

    return nullptr;
}