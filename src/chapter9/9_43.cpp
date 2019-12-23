/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<vector>
#include<string>

void st(std::string &s, const std::string &oldval, const std::string &newval) {
    auto emp = oldval.size();
    if (!emp)
        return;
    auto iter = s.begin();
    while (iter <= s.end() - 1) {
        auto iter1 = iter;
        auto iter2 = oldval.begin();
        while (iter2 != oldval.end() && *iter1 == * iter2) {
            iter1++;
            iter2++;
        }
        if (iter2 == oldval.end()) {
            iter = s.erase(iter, iter1);
            if (newval.size()) {
                iter2 = newval.end();
                do {
                    iter2--;
                    iter = s.insert(iter, *iter2);
                } while (iter2 > newval.begin());
            }
            iter += newval.size();
        } else {
            iter++;
        }
    }
}

int main() {
    std::string s = "tho thru";
    st(s, "thru", "turough");
    std::cout << s << std::endl;
}


