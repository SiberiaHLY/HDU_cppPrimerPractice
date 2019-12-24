/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#include<iostream>
#include<string>

class Employee {
    private:
        static int num;
        std::string name;
        int myid;
    public:
        Employee() {
            myid = num++;
        }
        Employee(const std::string &s) {
            myid = num++;
            name = s;
        }
        const std::string &getname() {
            return name;
        }
        int getid() {
            return myid;
        }
};