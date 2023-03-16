//
// Created by Kyllian on 14/03/2023.
//

#include "../Headers/Object.h"

Arena Object::g_Arena = Arena();
int Object::m_currentIndex = 0;

Object::Object() {
    this->name = "Objet";
    this->attachedComponents = vector<Component*>();
    this->id = Object::m_currentIndex;
    Object::m_currentIndex++;
    this->isActivated = true;
}

Object::Object(Tag tag) {
    this->name = "Objet";
    this->attachedComponents = vector<Component*>();
    this->tag = tag;
    this->id = Object::m_currentIndex;
    Object::m_currentIndex++;
    this->isActivated = true;
}

Object::Object(int id, bool activate, string name, Tag tag, vector<Component*> components)
{
    this->name = name;
    this->attachedComponents = components;
    this->tag = tag;
    this->id = id;
    this->isActivated = activate;
}

Object::Object(const Object& obj)
{
    this->name = obj.name;
    this->attachedComponents = obj.attachedComponents;
    this->tag = obj.tag;
    this->id = obj.id;
    this->isActivated = obj.isActivated;
}


Object::~Object() {
    //delete this;
}

int Object::getID()
{
    return this->id;
}

void Object::setID(int id)
{
    this->id = id;
}

void Object::setName(string name) {
    this->name = name;
}

string Object::getName() {
    return this->name;
}

void Object::setTag(Tag tag) {
    this->tag = tag;
}

Tag Object::getTag() {
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
    //remove(this->attachedComponents.begin(), this->attachedComponents.end(),component);
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

void* Object::operator new(const ::size_t size)
{
    return g_Arena.Allocate(size);
}

void Object::operator delete(void* pointer)
{
    return;
};

void Object::setActivate(bool b)
{
    this->isActivated = b;
}

void Object::toggleActivate()
{
    this->isActivated = !this->isActivated;
}

bool Object::isActivate()
{
    return isActivated;
}