//
// Created by Raf on 16/03/2023.
//

#include "../Headers/PhysicsComponent.h"

PhysicsComponent::PhysicsComponent(Object* obj):Component("PhysicsComponent", obj)
{

}

std::string PhysicsComponent::getType() const {
    return "PhysicsComponent";
}

int PhysicsComponent::GetInstance()
{
    return PhysicsComponent::instance_component;
}