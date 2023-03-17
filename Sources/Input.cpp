//
// Created by Kyllian on 17/03/2023.
//

#include "../Headers/Input.h"
float Input::xAxis = 0.0f;
float Input::yAxis = 0.0f;

float Input::GetXAxis()
{
    return xAxis;
}

float Input::GetYAxis()
{
    return yAxis;
}

void Input::Update()
{
    float left = 0.0f;
    float right = 0.0f;
    float up = 0.0f;
    float down = 0.0f;


    if(GetKeyState('Q') < 0)
    {
        left = -1;
    }

    if(GetKeyState('D') & 0x8000)
    {
        right = 1;
    }

    if(GetKeyState('S') & 0x8000)
    {
        down = -1;
    }

    if(GetKeyState('Z') & 0x8000)
    {
        up = 1;
    }

    xAxis = left + right;
    yAxis = up + down;

}

bool Input::isKeyDown(int virtualKeyCode) {
    return GetKeyState(virtualKeyCode) < 0;
}

bool Input::isKeyUp(int virtualKeyCode) {
    return GetKeyState(virtualKeyCode) >= 0;
}