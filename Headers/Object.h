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
#include "Arena.h"
#include "Tag.h"

using namespace std;

class Object {
    private:
        int id;
        bool isActivated;
        string name;
        Tag tag;
        vector<Component*> attachedComponents;

    public:
        static Arena g_Arena;
        static int m_currentIndex;

        //
        Object();
        Object(Tag tag);
        Object(int id, bool activate, string name, Tag tag, vector<Component*> components);
        Object(const Object& obj);
        ~Object();

        //
        int getID();
        void setID(int id);

        //
        string getName();
        void setName(string name);

        //
        void setActivate(bool b);
        void toggleActivate();
        bool isActivate();

        //
        Tag getTag();
        void setTag(Tag tag);

        //
        void addComponent(Component* component);
        void removeComponent(Component* component);

        template<class ComponentType>
        ComponentType getComponent();

        template<class ComponentType>
        vector<ComponentType> getComponents();

        void* operator new(const ::size_t size);

        void operator delete(void* pointer);

        Object& operator=(Object obj)
        {
            swap(id,obj.id);
            swap(isActivated,obj.isActivated);
            swap(name,obj.name);
            swap(tag,obj.tag);
            swap(attachedComponents,obj.attachedComponents);
            return *this;
        }

        inline static void CreatePool(int count)
        {
            g_Arena.Initialise(count * sizeof(Object));
        }
};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_OBJECT_H
