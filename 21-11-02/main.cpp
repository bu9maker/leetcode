#include <string>
#include <vector>
#include <set>
#include <math.h>
#include <stdio.h>

/**
 * Definition for singly-linked list.
*/
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        if (!node) return;
        ListNode *pre = NULL;
        while (node->next != NULL) {
            node->val = node->next->val;
            pre = node;
            node = node->next;
        }
        if (pre) {
            pre->next = NULL;
        }
        delete node;
    }
};