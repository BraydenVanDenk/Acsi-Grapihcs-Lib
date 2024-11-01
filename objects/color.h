#include "includes.h"


    //0: Black
    //1: Blue
    //2: Green
    //3: Cyan
    //4: Red
    //5: Magenta
    //6: Yellow (Brown)
    //7: White (Light Gray)
    //8: Gray (Dark Gray)
    //9: Light Blue
    //10: Light Green
    //11: Light Cyan
    //12: Light Red
    //13: Light Magenta
    //14: Light Yellow
    //15: Bright White


void color_text(int textColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, textColor);
}

void color_text_black() {
    color_text(0);
}

void color_text_blue() {
    color_text(1);
}

void color_text_green() {
    color_text(2);
}

void color_text_cyan() {
    color_text(3);
}

void color_text_red() {
    color_text(4);
}

void color_text_magenta() {
    color_text(5);
}

void color_text_yellow() {
    color_text(6);
}

void color_text_white() {
    color_text(7);
}

void color_text_gray() {
    color_text(8);
}

void color_text_lightblue() {
    color_text(9);
}

void color_text_lightgreen() {
    color_text(10);
}

void color_text_lightcyan() {
    color_text(11);
}

void color_text_lightred() {
    color_text(12);
}

void color_text_lightmagenta() {
    color_text(13);
}

void color_text_lightyellow() {
    color_text(14);
}

void color_text_brightwhite() {
    color_text(15);
}

