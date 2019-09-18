/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<vector>

int main() {
    std::vector<int> v(10);
    auto it = v.begin();
    for (; it != v.end(); it++) {
        std::cin >> *it;
    }
    for (it = v.begin(); it != v.end(); it++) {
        *it *= 2;
    }
    for (it = v.begin(); it != v.end(); it++) {
        std::cout << *it << std::endl;
    }
    return 0;
}
