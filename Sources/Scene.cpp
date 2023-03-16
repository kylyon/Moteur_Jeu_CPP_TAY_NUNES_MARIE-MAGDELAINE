//
// Created by Kyllian on 14/03/2023.
//

#include "../Headers/Scene.h"
Scene::Scene() {
    this->name = "Scene";
    this->id = 0;
    this->tagManager = TagManager::GetInstance();
    this->objectManager = ObjectManager::GetInstance();
    this->objetByTag = vector<Object>();
    this->nbObjects = 0;
}

void Scene::Run() {
    for (int i = 0; i < objectManager->GetNbObject() ; ++i) {
        Object temp = objectManager->GetObject(i);
        cout << temp.getName() << " " << temp.getID() << " - " << temp.getTag().getName() << endl;
    }

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

vector<Object> Scene::FindObjectWithTag(Tag tag)
{
    objetByTag.clear();
    for (int i = 0; i < objectManager->GetNbObject(); ++i) {
        Object obj = objectManager->GetObject(i);
        if (obj.getTag().getID() == tag.getID())
        {
            objetByTag.emplace_back(obj);
        }
    }

    return objetByTag;
}