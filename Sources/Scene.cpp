//
// Created by Kyllian on 14/03/2023.
//

#include "../Headers/Scene.h"
Scene::Scene() {
    this->name = "Scene";
    this->id = 0;
    this->objects = vector<Object*>();
    this->nbObjects = 0;
}

void Scene::Run() {
    return;
}

void Scene::Stop() {
    cout << "Scene stopped.";
    return;
}

int Scene::getNbObject() {
    return this->nbObjects;
}

string Scene::getName() {
    return this->name;
}

void Scene::setName(string name) {
    this->name = name;
}