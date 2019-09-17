/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> v;
    std::vector<std::string>::iterator it;
    std::string tempString;
    std::string ansString = "";
    while (std::cin >> tempString) {
        v.push_back(tempString);
    }
    for (it = v.begin(); it != v.end(); it++) {
        ansString += *it + " ";
    }
    std::cout << ansString << std::endl;
    return 0;
}
