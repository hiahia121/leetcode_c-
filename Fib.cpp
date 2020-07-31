//
// Created by yyc121 on 2020/7/30.
//
#include "Fib.h"

int Fib::fib(int n) {
    // 递归实现
//    int ret;
//    if(n == 0 || n == 1){
//        return n;
//    }
//    ret = fib(n - 1) + fib(n - 2);
//    return ret;
    // 非递归实现
    int last1 = 0, last2 = 1;
    int ret;
    if (n == 0){
        ret = 0;
    }
    if (n == 1){
        ret = 1;
    }
    else if (n >= 2){
        for (int i = 2; i <= n; i++) {
            ret = last1 + last2;
            last2 = last1;
            last1 = ret;
        }
    }
    return ret;
}
