#pragma once
#include "includes.h"

void make_new_line(int ammount) {
    for (int i = 0; i < ammount;) {
        std::cout << " " << '\n';
        i++;
    }
}

void make_new_line() {
    std::cout << " " << '\n';
}