// 13 October 2023

#include <bits/stdc++.h>
using namespace std

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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

    

        ListNode* curr = head;
        ListNode* temp = head->next;

        while(temp != NULL)
        {
           int a = curr->val;
           int b = temp->val;
           int ans = gcd(a,b);

            curr->next = new ListNode(ans);
            curr = curr->next;
            curr->next = temp;
            curr = curr->next;
            temp = temp->next;
        }

        return head;
    }
};