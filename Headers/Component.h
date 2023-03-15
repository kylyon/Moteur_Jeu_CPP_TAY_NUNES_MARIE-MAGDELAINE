//
// Created by Kyllian on 14/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_COMPONENT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_COMPONENT_H

#include "iostream"
#include "string"

using namespace std;

class Component {
    private:
        int id;
        string name;
        //Object* objectAttached;

    public:
        Component();
        ~Component();

        static const int instance_component = 0;
};




#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_COMPONENT_H
