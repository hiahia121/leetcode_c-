//
// Created by yyc121 on 2020/7/29.
//
#include <iostream>
#include "ReplaceSpace.h"

/*
 * 请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
 *示例 1：
 * 输入：s = "We are happy."
 * 输出："We%20are%20happy."
 * */
string ReplaceSpace::replaceSpace(string s) {
    string ret;
    for(auto &c: s){
        if(c == ' '){
            ret.push_back('%');
            ret.push_back('2');
            ret.push_back('0');
        }else{
            ret.push_back(c);
        }
    }
    return ret;
}