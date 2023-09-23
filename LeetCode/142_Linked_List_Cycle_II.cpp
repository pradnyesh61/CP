// 23 September 2023

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* temp = head;

        int i = 0;
     
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != NULL)
        {
            if(fast->next == NULL || fast->next->next == NULL)
            {
                return NULL;
            }

            fast = fast->next->next;
            slow = slow->next;

            cout<<"fast = "<<fast->val<<" Slow = "<<slow->val<<endl;

             if(fast == slow)
            {
                ListNode* entry = head;
                cout<<entry->val<<" :=: "<<slow->val<<endl;
                    
                while(entry != slow)
                {
                    entry = entry->next;
                    slow = slow->next;
                cout<<entry->val<<" :=: "<<slow->val<<endl;
                    
                }

                return entry;
            }
             

        }

        return temp;

    }
};