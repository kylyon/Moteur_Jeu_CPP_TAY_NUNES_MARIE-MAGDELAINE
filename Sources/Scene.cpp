
//
// Created by Kyllian on 14/03/2023.
//

#include "../Headers/Scene.h"
#include "../Headers/ThreadPool.h"
#include <atomic>

Scene::Scene() {
    this->name = "Scene";
    this->id = 0;
    this->tagManager = TagManager::GetInstance();
    this->objectManager = ObjectManager::GetInstance();
    this->objetByTag = vector<Object*>();
    this->nbObjects = 0;
}

void Scene::Run() {
    for (int i = 0; i < objectManager->GetNbObject() ; i++) {
        Object* temp = objectManager->GetObjectFromPool(i);
        cout << temp->getName() << " - ID : " << temp->getID() << " - Tag : " << temp->getTag().getName() << " Components : ";
        for (const auto& component : temp->getComponents()) {
            cout << component->getType() << ", ";
        }
        cout << endl;
    }

    ThreadPool threadPool(4);

    //Input input;
    bool quit = false;
    while(!quit)
    {
        Input::Update();

        /*for(auto &objects : objectManager->GetPool()) {
            threadPool.enqueue([&objects] {
               objects->updateComponents();
            });
        }*/



        for (int i = 0; i < objectManager->GetNbObject(); i++) {
            Object* objects = objectManager->GetObjectFromPool(i);
            threadPool.enqueue([objects] {

                objects->updateComponents();

            });
        }
        threadPool.waitUntilFinished();

       /* while(tasksRemaining > 0) {
            std::this_thread::yield();
        }*/

        if(GetKeyState(VK_ESCAPE) & 0x8000)
        {
           quit = true;
        }



        Sleep(100);
    }

    Stop();

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

vector<Object*> Scene::FindObjectWithTag(Tag tag)
{
    objetByTag.clear();
    for (int i = 0; i < objectManager->GetNbObject(); i++) {
        Object* obj = objectManager->GetObjectFromPool(i);
        if (obj->getTag().getID() == tag.getID())
        {
            objetByTag.emplace_back(obj);
        }
    }

    return objetByTag;
}