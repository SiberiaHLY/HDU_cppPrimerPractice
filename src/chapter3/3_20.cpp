/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<vector>

int main() {
    std::vector<int> v;
    std::vector<int>::iterator it;
    int tempInt;
    while (std::cin >> tempInt) {
        v.push_back(tempInt);
    }
    // 输出相邻整数和
    for (it = v.begin(); it != v.end()-1; it++) {
        std::cout << *it + *(it+1) << std::endl;
    }
    // 输出头尾和
    int vectorSize = v.size();
    if (vectorSize%2) {
        for (int i = 0; i < vectorSize/2; i++) {
            std::cout << v[i]+v[vectorSize-1-i] << std::endl;
        }
        std::cout << v[vectorSize/2] << std::endl;
    } else {
        for (int i = 0; i < vectorSize/2; i++) {
            std::cout << v[i]+v[vectorSize-1-i] << std::endl;
        }
    }
    return 0;
}
