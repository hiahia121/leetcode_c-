#include <iostream>
#include <vector>
#include "FindNumsRepeat.h"
#include "FindNumIn2DArray.h"
#include "ReplaceSpace.h"
#include "ReversePrint.h"
#include "Fib.h"

using namespace std;

int main() {
// leetcode03
//    int arrays[] = {1, 2, 3, 4, 5, 1};
//    int length = sizeof(arrays) / sizeof(arrays[0]);
//    FindNumsRepeat fnr;
//    cout << fnr.findRepeatNum(arrays, length);

// leetcode04
//    int arrays[3][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}};
//    vector<vector<int>> matrix (3, vector<int>(5, 0));
//    for(int i=0; i<matrix.size(); i++){
//        for(int j=0; j<matrix[0].size(); j++){
//            matrix[i][j] = arrays[i][j];
//        }
//    }
//    FindNum2DArray fn2da;
//    cout << fn2da.findNumIn2DArray(matrix, 4);

// leetcode05
//    string rep_str = "we are friends";
//    ReplaceSpace rs;
//    cout << rs.replaceSpace(rep_str);

// leetcode06
//    ListNode head = ListNode(1);
//    ListNode a = ListNode(2);
//    ListNode b = ListNode(3);
//    head.next = &a;
//    a.next = &b;
//    b.next = nullptr;
//    ReversePrint rp;
//    vector<int> res = rp.reversePrint(&head, 1);
//    for(auto &i: res){
//        cout << i << endl;
//    }

// leetcode10
    Fib f;
    cout << f.fib(8);

    return 0;
}
