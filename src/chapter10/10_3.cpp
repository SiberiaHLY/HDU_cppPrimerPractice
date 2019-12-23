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
    std::cout << accumulate(v.begin(), v.end(), 0);
    return 0;
}
