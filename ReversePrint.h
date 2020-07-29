//
// Created by yyc121 on 2020/7/29.
//

#ifndef LEETCODE_C_REVERSEPRINT_H
#define LEETCODE_C_REVERSEPRINT_H
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

class ReversePrint{
public:
    vector<int> reversePrint(ListNode* head, int flag);
};
#endif //LEETCODE_C_REVERSEPRINT_H
