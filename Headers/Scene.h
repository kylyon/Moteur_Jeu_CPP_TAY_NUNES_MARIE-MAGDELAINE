//
// Created by Kyllian on 14/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H

#include "iostream"
#include "string"
#include "vector"
#include "Object.cpp"

using namespace std;

class Scene
{
    private:
        int id;
        string name;
        vector<Object*> objects;

    public:
        void Run();
        void Stop();

};

#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_SCENE_H
