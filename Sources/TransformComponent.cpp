//
// Created by kylli on 16/03/2023.
//

#include "../Headers/TransformComponent.h"
TransformComponent::TransformComponent()
{
    this->positionX = 0.0f;
    this->positionY = 0.0f;
    this->positionZ = 0.0f;

    this->rotationX = 0.0f;
    this->rotationY = 0.0f;
    this->rotationZ = 0.0f;

    this->scaleX = 0.0f;
    this->scaleY = 0.0f;
    this->scaleZ = 0.0f;
}

std::string TransformComponent::getType() const {
    return "TransformComponent";
}

void TransformComponent::Translate(float positionX, float positionY, float positionZ)
{
    this->positionX += positionX;
    this->positionY += positionY;
    this->positionZ += positionZ;
}

void TransformComponent::Rotate(float rotationX, float rotationY, float rotationZ)
{
    this->rotationX += rotationX;
    this->rotationY += rotationY;
    this->rotationZ += rotationZ;
}

void TransformComponent::Scale(float scaleX, float scaleY, float scaleZ)
{
    this->scaleX += scaleX;
    this->scaleY += scaleY;
    this->scaleZ += scaleZ;
}