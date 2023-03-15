//
// Created by Kyllian on 14/03/2023.
//

#include "../Headers/Object.h"
Object::Object() {
    this->name = "Objet";
    this->attachedComponents = vector<Component>();
    this->tag = "Aucun";
}

void Object::setName(string name) {
    this->name = name;
}

string Object::getName() {
    return this->name;
}

void Object::setTag(string tag) {
    this->tag = tag;
}

string Object::getTag() {
    return this->tag;
}

void Object::addComponent(Component* component) {
    if (count(attachedComponents.begin(), attachedComponents.end(), component)) {
        cout << "Component already attached";
        return;
    }

    this->attachedComponents.emplace_back(component);
}

void Object::removeComponent(Component* component) {
    remove(this->attachedComponents.begin(), this->attachedComponents.end(),component);
}

template<class ComponentType>
ComponentType Object::getComponent() {
    for (int i = 0; i < this->attachedComponents.size(); i++) {
        if (this->attachedComponents[i]->instance_component == ComponentType::instance_component)
        {
            return this->attachedComponents[i];
        }
    }
    return nullptr;
}

template<class ComponentType>
vector<ComponentType> Object::getComponents() {
    vector<ComponentType> componentsReturn = vector<ComponentType>();
    for (int i = 0; i < this->attachedComponents.size(); i++) {
        if (this->attachedComponents[i]->instance_component == ComponentType::instance_component)
        {
            componentsReturn.emplace_back(this->attachedComponents[i]);
        }
    }
    return componentsReturn;
}