//
// Created by Kyllian on 14/03/2023.
//

#include "../Headers/Component.h"

Component::Component() {
    this->name = "Component";
    this->objectAttached = nullptr;
}

Component::Component(string name, Object* obj) {
    this->name = name;
    this->objectAttached = obj;
}

Component::~Component() {

}

void Component::Update()
{}

int Component::GetInstance()
{
    return Component::instance_component;
}