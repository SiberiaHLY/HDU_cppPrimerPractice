/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<vector>
#include<algorithm>



int main() {
    std::vector<int> v;
    int temp;
    while (std::cin >> temp) {
        v.push_back(temp);
    }
    for (auto iter = v.crbegin(); iter != v.crend(); iter++) {
        std::cout << *iter << std::endl;
    }
    return 0;
}
