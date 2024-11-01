#pragma once
#include "includes.h"

void triangle(int x, int y, std::string charecter) {
    int y_loop = 0;
    int x_loop = 0;
    std::string txt = charecter;

    while (y_loop < y) {

        std::cout << txt << '\n';

        for (int i = 0; i < x;) {
            txt = txt + charecter;
            i++;
        }

        y_loop++;
    }
}