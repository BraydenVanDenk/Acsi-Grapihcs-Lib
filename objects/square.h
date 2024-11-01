#pragma once
#include "includes.h"

void square(int x, int y, std::string charecter = "█") {
    int x_loop = 0;
    int y_loop = 0;
    std::string txt = charecter;

    while (x_loop < x) {

        txt = txt + charecter;

        x_loop++;
    }

    while (y_loop < y) {

        std::cout << txt << '\n';

        y_loop++;
    }
}