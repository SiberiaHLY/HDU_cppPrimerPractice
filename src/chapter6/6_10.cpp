/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include"6_10.h"
#include<iostream>

int main() {
    int num1;
    int num2;
    std::cin >> num1 >> num2;
    mySwap(&num1, &num2);
    std::cout << num1 << " " << num2 << std::endl;
    return 0;
}

void mySwap(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return;
}
