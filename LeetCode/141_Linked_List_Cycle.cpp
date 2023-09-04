// 4 September 2023

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

    bool cycle(ListNode* head,ListNode* Twohead)
    {
        cout<<head->val<<" = "<<Twohead->val<<endl;
        cout<<head<<" = "<<Twohead<<endl;
        
        if(head == NULL || Twohead == NULL)
        {
                        cout<<"no"<<endl;
            return false;
        }

        if(Twohead == head){
            cout<<"hi"<<endl;
            return true;
        }

        if(Twohead->next->next != NULL)
        {
            Twohead = Twohead->next->next;
        }

        if(head->next != NULL)
        {
            head = head->next;
        }

        bool c =  cycle(head,Twohead);
        cout<<c<<endl;
        return c;
    }

   
    bool hasCycle1(ListNode *head) {
        
    
       if(head==NULL || head->next == NULL || head->next->next == NULL)
       {
           return false;
       }

        return cycle(head,head->next->next);
    }

     bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow)
            {
                return true;
            }
        }

        return false;

    }
};