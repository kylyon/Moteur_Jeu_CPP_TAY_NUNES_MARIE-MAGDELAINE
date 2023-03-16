//
// Created by kylli on 16/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TAG_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TAG_H
#include "string"

using namespace std;

class Tag {

private:
string name;
int id;

public:

Tag();
Tag(string name, int id);
int getID();
string getName();

Tag& operator=(Tag obj)
{
    swap(name, obj.name);
    swap(id, obj.id);
    return *this;
}

};



#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TAG_H
