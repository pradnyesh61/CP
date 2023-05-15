// 15 May 2023

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

private:
ListNode* start = NULL;
ListNode* end = NULL;

int j = 0;
    
    void swapNodes1(ListNode* head, int k, int i) {
        if(head == NULL)
        {
            return;
        }
      
        if(k == i)
        {
            start = head;
        }
        
        swapNodes1(head->next,k,++i);

        j++;
        
        if(k == j)
        {
            end = head;
        }

        return;
    }

public:
    ListNode* swapNodes(ListNode* head, int k) {
        swapNodes1(head,k,1);
    
        int temp = start->val;
        start->val = end->val;
        end->val = temp;
       
        return head;
    }
};