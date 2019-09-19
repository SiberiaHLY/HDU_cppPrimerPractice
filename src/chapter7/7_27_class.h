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
    Screen& move(pos row, pos col);
    Screen& set(char c);
    Screen& display(std::ostream &os);
 private:
    pos cursor;
    pos height;
    pos width;
    std::string contents;

    void do_display(std::ostream &os)const;
};

#endif  // SRC_CHAPTER7_7_27_CLASS_H_
