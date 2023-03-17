//
// Created by Kyllian on 14/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_COMPONENT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_COMPONENT_H

#include "iostream"
#include "string"
#include "Object.h"
#include <cassert>
#define assertm(exp, msg) assert(((void)msg, exp))

using namespace std;
class Object;

class Component {
protected:
        int id;
        string name;
        Object* objectAttached;

    public:
        Component();
        Component(string name, Object* obj);
        ~Component();

        virtual void Update();
        virtual int GetInstance();
        static const int instance_component = 0;
        virtual std::string getType() const = 0;
};




#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_COMPONENT_H
