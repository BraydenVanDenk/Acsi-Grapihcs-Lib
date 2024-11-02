#pragma once
#include "includes.h"

void line_horizontal(int x, std::string charecter = "█") {
    int x_loop = 0;
    std::string txt = charecter;
    while (x_loop < x) {
        txt = txt + charecter;
        x_loop++;
    }

    std::cout << txt;
}