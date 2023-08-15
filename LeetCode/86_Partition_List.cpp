// 15 August 2023

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
public:


    ListNode* partition(ListNode* head, int x) {

        vector<int> small,great;

        ListNode* temp = head;

        while(temp != NULL)
        {
            if(temp->val < x)
            small.push_back(temp->val);
            else
            great.push_back(temp->val);
            
            temp = temp->next;
        }

        temp = head;

        int i = 0;

       for(auto it: small)
       {
           temp->val = it;
           temp = temp->next;
       }

       
       for(auto it: great)
       {
           temp->val = it;
           temp = temp->next;
       }

        return head;
    }
};