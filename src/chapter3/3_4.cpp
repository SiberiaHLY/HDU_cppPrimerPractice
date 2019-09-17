/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<string>

int main() {
    std::string s1;
    std::string s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    // equal?
    if (s1 == s2) {
        std::cout << "equal" << std::endl;
    } else {
        std::cout << "not equal" << std::endl;
        std::cout << (s1 > s2 ? s1 : s2) << std::endl;
    }
    // equal length?
    int len1 = s1.size();
    int len2 = s2.size();
    if (len1 ==len2) {
        std::cout << "equal length" << std::endl;
    } else {
        std::cout << "not equal length" << std::endl;
        std::cout << (len1 > len2 ? s1 : s2) << std::endl;
    }
    return 0;
}
