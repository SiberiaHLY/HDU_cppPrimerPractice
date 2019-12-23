/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<list>
#include<string>
#include<algorithm>

void delet(std::list<std::string> &w) {
    w.sort();
    w.unique();
    for (auto iter = w.begin(); iter != w.end(); iter++) {
        std::cout<< *iter << std::endl;
    }
}


int main() {
    std::list<std::string> wd;
    std::string temp;
    while (std::cin >> temp) {
        wd.push_back(temp);
    }
    delet(wd);
    return 0;
}
