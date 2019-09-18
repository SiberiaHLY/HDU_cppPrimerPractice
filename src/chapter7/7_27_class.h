/*
# Copyright (c) 2019 Luyu Hui. All rights reserved.
*/

#ifndef SRC_CHAPTER7_7_27_CLASS_H_
#define SRC_CHAPTER7_7_27_CLASS_H_

#include<string>

class Screen {
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c);
    private:
        pos cursor;
        pos height;
        pos width;
        std::string contents;
}

#endif  // SRC_CHAPTER7_7_27_CLASS_H_