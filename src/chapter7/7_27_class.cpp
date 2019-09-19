/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include"7_27_class.h"

Screen::Screen(pos ht, pos wd, char c) {
    std::string tempContents(ht * wd, c);
    height = ht;
    width = wd;
    contents = tempContents;
}

Screen& Screen::move(pos row, pos col) {
    cursor = width * row + col;
    return *this;
}

Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

Screen& Screen::display(std::ostream &os) {
    do_display(os);
    return *this;
}

void Screen::do_display(std::ostream &os)const {
    os << contents;
    return;
}
