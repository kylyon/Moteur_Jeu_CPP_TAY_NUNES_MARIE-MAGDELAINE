//
// Created by Kyllian on 14/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H

#include "iostream"
#include "string"
#include "vector"
#include "ObjectManager.h"
#include "TagManager.h"
#include "Input.h"
#define WIN32_LEAN_AND_MEAN 1
#include "Windows.h"

using namespace std;

class Scene
{
    private:
        int id;
        string name;
        ObjectManager* objectManager;
        TagManager* tagManager;
        vector<Object*> objetByTag;
        int nbObjects;

    public:
        Scene();

        void Run();
        void Stop();

        int getNbObject();
        string getName();
        void setName(string name);

        ObjectManager* GetObjectManager()
        {
            return objectManager;
        }

        TagManager* GetTagManager()
        {
            return tagManager;
        }

        vector<Object*> FindObjectWithTag(Tag tag);
};

#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H
