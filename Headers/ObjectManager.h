//
// Created by kylli on 16/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_OBJECTMANAGER_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_OBJECTMANAGER_H
#include "vector"
#include "Object.h"
#include "Factory.h"
using namespace std;

class ObjectManager {
private:
    vector<Object> pool;
    int nbObject;
    static ObjectManager* singleton;

public:
    ObjectManager();
    static ObjectManager* GetInstance();

    Object CreateObject(Tag tag, const std::vector<std::string>& componentTypes);
    void DeleteObject(Object obj);

    int GetNbObject();
    Object GetObject(int i);
};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_OBJECTMANAGER_H
