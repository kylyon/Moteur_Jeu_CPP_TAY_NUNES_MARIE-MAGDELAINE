//
// Created by Kyllian on 14/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H

#include "iostream"
#include "string"
#include "vector"
#include "Object.h"

using namespace std;

class Scene
{
    private:
        int id;
        string name;
        vector<Object*> objects;
        int nbObjects;

    public:
        Scene();

        void Run();
        void Stop();

        int getNbObject();
        string getName();
        void setName(string name);
};

#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H
