#pragma once
#include "includes.h"

void line(int x, std::string charecter) {
    int x_loop = 0;
    std::string txt = charecter;
    while (x_loop < 0) {
        txt = txt + charecter;
        x_loop++;
    }

    std::cout << txt;
}