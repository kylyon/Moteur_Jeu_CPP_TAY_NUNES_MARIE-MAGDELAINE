//
// Created by Kyllian on 14/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_OBJECT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_OBJECT_H

#include <vector>
#include <algorithm>
#include "iostream"
#include "string"
#include "Component.h"

using namespace std;

class Object {
    private:
        string name;
        string tag;
        vector<Component*> attachedComponents;

    public:
        //
        Object();

        //
        string getName();
        void setName(string name);

        //
        string getTag();
        void setTag(string tag);

        //
        void addComponent(Component* component);
        void removeComponent(Component* component);

        template<class ComponentType>
        ComponentType getComponent();

        template<class ComponentType>
        vector<ComponentType> getComponents();
};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_OBJECT_H
