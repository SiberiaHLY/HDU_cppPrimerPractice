/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<vector>
#include<string>
#include<utility>


int main() {
    std::vector<std::pair<std::string, int>> v;
    std::string tempstr;
    int tempint;
    while (std::cin >> tempstr && std::cin >> tempint) {
        v.push_back(std::pair<std::string, int>(tempstr, tempint));
    }
    for (const auto &i : v) {
        std::cout << i.first << " " << i.second << std::endl;
    }
    return 0;
}
