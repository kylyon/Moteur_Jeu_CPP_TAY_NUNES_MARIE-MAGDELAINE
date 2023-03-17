//
// Created by kylli on 16/03/2023.
//

#include "../Headers/ObjectManager.h"
#include "../Headers/Factory.h"

ObjectManager* ObjectManager::singleton = nullptr;

ObjectManager::ObjectManager() {
    this->pool = vector<Object*>();
    this->pool.reserve(10);
    this->pool.insert(this->pool.begin(), 10, nullptr);
    this->hashPool = vector<int>(10, 1);
    this->nbObject = 0;
    this->nbComponents = 0;
}

ObjectManager* ObjectManager::GetInstance() {
    if (singleton== nullptr)
    {
        singleton = new ObjectManager();
    }

    return singleton;
}

Object* ObjectManager::CreateObject(Tag tag, const std::vector<std::string>& componentTypes)
{
    int index = FindFirstEmptyPlace();

    if (index == -1) return nullptr;

    Object* createdObject = new Object(tag);
    for (const auto& type : componentTypes) {
        auto component = Factory::createComponent(type, createdObject);
        if (component) {
            createdObject->addComponent(component.release());
            nbComponents++;
        }
    }
    createdObject->setID(index);
    hashPool[index] = 0;
    pool[index] = createdObject;
    this->nbObject++;
    return createdObject;
}

void ObjectManager::DeleteObject(Object obj)
{
    pool[obj.getID()] = nullptr;
    hashPool[obj.getID()] = 1;
    this->nbObject--;
    //delete &obj;
}

int ObjectManager::GetNbObject()
{
    return this->nbObject;
}

int ObjectManager::GetNbComponents()
{
    return this->nbComponents;
}

Object* ObjectManager::GetObjectFromPool(int i)
{
    return this->pool[i];
}

vector<Object*> ObjectManager::GetPool()
{
    return this->pool;
}

int ObjectManager::FindFirstEmptyPlace()
{
    for (int i = 0; i < 2048; i++) {
        if (this->hashPool[i] == 1)
        {
            return i;
        }
    }

    return -1;
}