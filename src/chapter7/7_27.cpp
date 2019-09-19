/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include"7_27_class.h"

int main() {
    Screen myScreen(5, 5, 'x');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << std::endl;
    myScreen.display(std::cout);
    std::cout << std::endl;
    return 0;
}
