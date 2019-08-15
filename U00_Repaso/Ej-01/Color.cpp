#include "Color.h"
#include <iostream>

Color::Color() {
    color=0;
}

Color::Color(int xColor) {
    color=xColor;
}

void Color::GetColor() {
        switch (color){
            case 1:
                std::cout << "Color: Rojo" << std::endl;
                break;
            case 2:
                std::cout << "Color: Verde" << std::endl;
                break;
            case 3:
                std::cout << "Color: Azul" << std::endl;
                break;
            default:
                std::cout << "Color: Blanco" << std::endl;
        }
    }

void Color::Tenir(int xColor) {
    color = xColor;
}
