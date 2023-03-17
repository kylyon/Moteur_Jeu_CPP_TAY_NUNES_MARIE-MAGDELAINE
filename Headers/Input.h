//
// Created by Kyllian on 17/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_INPUT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_INPUT_H
#define _WIN32_WINNT 0x0601
#define WIN32_LEAN_AND_MEAN 1
#include <Windows.h>
#include <iostream>

using namespace std;

class Input {
private:
    static float xAxis, yAxis;

public:
    static bool isKeyDown(int virtualKeyCode);
    static bool isKeyUp(int virtualKeyCode);

    static float GetXAxis();
    static float GetYAxis();
    static void Update();
};




#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_INPUT_H
