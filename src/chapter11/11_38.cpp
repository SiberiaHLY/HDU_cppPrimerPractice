/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<unordered_map>

int main() {
    std::unordered_map<std::string, int> words;
    std::string word;
    while (std::cin >> word) {
        ++words[word];
    }
    for (const auto &i : words) {
        std::cout << i.first << "  " << i.second << std::endl;
    }
    return 0;
}
