/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>

void add(int a) {
    auto ans = [a] (int b) {
        return a + b;
    };
    std::cout << ans(1) << std::endl;
}


int main() {
    add(10);
    return 0;
}
