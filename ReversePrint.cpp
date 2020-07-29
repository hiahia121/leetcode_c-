//
// Created by yyc121 on 2020/7/29.
//
#include "ReversePrint.h"
#include <stack>
using namespace  std;

vector<int> ReversePrint::reversePrint(ListNode *head, int flag) {
    vector<int> res;
    if(flag == 1){
        //方法1：reverse反转法
        while (head){
            res.push_back(head->val);
            head = head->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }else if(flag == 2) {
        //方法2：入栈法
        stack<int> s;
        while (head) {
            s.push(head->val);
            head = head->next;
        }
        //出栈
        while (!s.empty()) {
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
//    }else if(flag == 3){
//        //方法3：递归
//        if(head == nullptr)
//            return res;
//        reversePrint(head->next);
//        res.push_back(head->val);
//        return res;
    }