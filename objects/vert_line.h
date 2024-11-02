#pragma once
#include "includes.h"

void line_verticle(int y, std::string charecter = "█") {
    std::string tex = charecter;
    for (int i = 0; i < y;) {
        std::cout << tex << '\n';
        i++;
    } 
}