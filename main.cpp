#include <iostream>
#include "Headers//Object.h"

int main() {
    Object::CreatePool(2048);

    cout << "Taille de la pool avant : " << Object::g_Arena.m_cursor << endl;

    Object* obj1 = new Object();
    Object* obj2 = new Object();
    Object* obj3 = new Object();
    Object* obj4 = new Object();

    cout << "Taille de la pool après : " << Object::g_Arena.m_cursor << endl;
}
