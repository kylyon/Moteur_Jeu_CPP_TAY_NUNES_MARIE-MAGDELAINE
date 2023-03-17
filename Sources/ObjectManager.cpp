//
// Created by kylli on 16/03/2023.
//

#include "../Headers/ObjectManager.h"
#include "../Headers/Factory.h"

ObjectManager* ObjectManager::singleton = nullptr;

ObjectManager::ObjectManager() {
    this->pool = vector<Object>();
    this->pool.reserve(2048);
    this->nbObject = 0;
}

ObjectManager* ObjectManager::GetInstance() {
    if (singleton== nullptr)
    {
        singleton = new ObjectManager();
    }

    return singleton;
}

Object ObjectManager::CreateObject(Tag tag, const std::vector<std::string>& componentTypes)
{
    Object* createdObject = new Object(tag);
    for (const auto& type : componentTypes) {
        auto component = Factory::createComponent(type);
        if (component) {
            createdObject->addComponent(component.release());
        }
    }
    pool.emplace_back(*createdObject);
    this->nbObject++;
    return *createdObject;
}

void ObjectManager::DeleteObject(Object obj)
{
    pool[obj.getID()].setActivate(false);
}

int ObjectManager::GetNbObject()
{
    return this->nbObject;
}

Object ObjectManager::GetObject(int i)
{
    return this->pool[i];
}