#pragma once

#include <string>

#include "Input.h"
#include "Graphics.h"
#include "Color.h"

using namespace ascii;

class Button
{
    public:
        Button(string text, int cellX, int cellY);

        bool IsPressed() { return pressed; }
        void HandleInput(Input& input);
        void Draw(Graphics& graphics);

        Color textColor;
        Color textColorSelected;

        Color backgroundColor;
        Color backgroundColorSelected;
    private:
        string text;
        int cellX, cellY;
        int mouseX, mouseY;
        bool pressed;
        bool mousePressed;
};
