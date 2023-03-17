#include <iostream>
#include "Headers/Scene.h"

int main() {
    Object::CreatePool(2048);
    Scene scene = Scene();

    vector<string> componentTypes = {};
    cout << "Creation des objets" << endl;
    Object* obj1 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(0), componentTypes);
    Object* obj2 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(1), componentTypes);
    Object* obj3 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(1), componentTypes);
    Object* obj4 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(2), componentTypes);

    cout << "Supression de l'objet d'ID 1" << endl;
    scene.GetObjectManager()->DeleteObject(*obj2);
    obj2 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(1), {"TransformComponent","PlayerMovementComponent"});

    cout << "Composants des objets d'ID 1 et 2" << endl;
    obj2->displayComponents();
    obj3->displayComponents();

    cout << "Lancement de la scène" << endl;
    scene.Run();

    cout << "Récupération des objet avec le Tag 1 = PLAYER" << endl;
    vector<Object*> temp = scene.FindObjectWithTag(scene.GetTagManager()->GetTag(1));
    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i]->getName() << " - ID : " << temp[i]->getID() << " - Tag : " << temp[i]->getTag().getName() << " Components : ";
        for (const auto& component : temp[i]->getComponents()) {
            cout << component->getType() << ", ";
        }
        cout << endl;
    }

}
