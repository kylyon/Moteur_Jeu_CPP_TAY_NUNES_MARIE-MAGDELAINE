//
// Created by kylli on 16/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TAGMANAGER_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TAGMANAGER_H
#include "vector"
#include "Tag.h"

using namespace std;

class TagManager {
private:
    static TagManager* singleton;
    static int tag_index;
    vector<Tag> tags;

public:
    TagManager();
    static TagManager* GetInstance();

    void AddTag(string name);
    Tag GetTag(int id);

};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_TAGMANAGER_H
