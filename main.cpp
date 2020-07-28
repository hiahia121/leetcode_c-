#include <iostream>
#include <vector>
#include "FindNumsRepeat.h"
#include "FindNumIn2DArray.h"

using namespace std;

int main() {
//    int arrays[] = {1, 2, 3, 4, 5, 1};
//    int length = sizeof(arrays) / sizeof(arrays[0]);
//    FindNumsRepeat fnr;
//    cout << fnr.findRepeatNum(arrays, length);

    int arrays[3][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}};
    vector<vector<int>> matrix (3, vector<int>(5, 0));
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            matrix[i][j] = arrays[i][j];
        }
    }
    FindNum2DArray fn2da;
    cout << fn2da.findNumIn2DArray(matrix, 4);
    return 0;
}
