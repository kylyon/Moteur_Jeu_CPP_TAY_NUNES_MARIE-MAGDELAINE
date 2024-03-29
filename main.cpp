#include <iostream>
#include "Headers/Scene.h"

int main() {
    Object::CreatePool(2048);
    Scene scene = Scene();

    //cout << "Taille de la pool avant : " << Object::g_Arena.m_cursor << endl;

    vector<string> componentTypes = {};
    Object obj1 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(0), componentTypes);
    Object obj2 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(1), componentTypes);
    Object obj3 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(1), {"PhysicsComponent", "TransformComponent"});
    Object obj4 = scene.GetObjectManager()->CreateObject(scene.GetTagManager()->GetTag(2), componentTypes);

    obj2.displayComponents();
    obj3.displayComponents();

    //cout << "Taille de la pool après : " << Object::g_Arena.m_cursor << endl;



    scene.Run();

    vector<Object> temp = scene.FindObjectWithTag(scene.GetTagManager()->GetTag(1));
    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i].getID() << endl;
    }

}
