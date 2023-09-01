// 1 September 2023

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


    ListNode* oddEvenList(ListNode* head) {

        if(head == NULL)
        {
            return head;
        }

        ListNode* even = NULL;

        int count = 1;

         ListNode* odd = head;
         ListNode* odd2 = head;

         ListNode* temp = head;
         ListNode* tempeven = NULL;

        while(head != NULL)
        {
            if(count%2 == 0)
            {
                if(even == NULL){
                    even = new ListNode(head->val);
                    tempeven = even;
                }
                else{           
                    even->next = new ListNode(head->val);
                    even = even->next;
                }
            }
            else{
                odd2 = odd;
                odd->val = head->val;
                odd = odd->next;
            }

            head = head->next;
            count++;

        }



        odd2->next = tempeven;

        return temp;
        
    }
};