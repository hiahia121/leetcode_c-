//
// Created by yyc121 on 2020/7/28.
//

/*
 * 在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 * 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
 * 示例:
现有矩阵 matrix 如下：

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。
给定 target = 20，返回 false。
 * */
#include <iostream>
#include <vector>
#include "FindNumIn2DArray.h"
using namespace std;

bool FindNum2DArray::findNumIn2DArray(vector<vector<int> > &matrix, int target) {
    if (matrix.size() == 0){
        return false;
    }
    int m = matrix.size();
    int n = matrix[0].size();
    int row = 0;
    int col = n - 1;
    while (row < m && col >=0){
        int num = matrix[row][col];
        if (num == target){
            return true;
        }
        else if(num < target){
            row += 1;
        }
        else{
            col -= 1;
        }
    }
    return false;
}