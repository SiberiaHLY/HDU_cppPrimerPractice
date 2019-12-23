/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<list>
#include<deque>

int main() {
    std::list<int> li = {0, 1, 2, 3};
    std::deque<int> ou, ji;
    for (auto iter = li.begin(); iter != li.cend(); iter++) {
        if (*iter & 1) {
            ji.push_back(*iter);
        } else {
            ou.push_back(*iter);
        }
    }
}


