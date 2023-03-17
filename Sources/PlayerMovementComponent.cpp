//
// Created by Kyllian on 17/03/2023.
//

#include "../Headers/PlayerMovementComponent.h"
PlayerMovementComponent::PlayerMovementComponent():Component(){
    this->transform = nullptr;
}

PlayerMovementComponent::PlayerMovementComponent(Object* obj):Component("PlayerMovementComponent", obj){
    this->transform = static_cast<TransformComponent *>(Component::objectAttached->getComponent<TransformComponent>());
}

PlayerMovementComponent::~PlayerMovementComponent(){}


void PlayerMovementComponent::Update()
{
    assert(transform != nullptr);
    float xAxis = Input::GetXAxis();
    float yAxis = Input::GetYAxis();

    transform->Translate(xAxis, yAxis, 0);
}

int PlayerMovementComponent::GetInstance()
{
    return PlayerMovementComponent::instance_component;
}

string PlayerMovementComponent::getType() const {
    return "PlayerMovementComponent";
}