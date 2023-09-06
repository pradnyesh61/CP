// 6 September 2023

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }

            vector<ListNode*> v;

            temp = head;

            while(k)
            {
                int t = ceil((float)count/k);
                ListNode* list = NULL;
                ListNode* listtemp = list;
                    while(t)
                    {                        
                        if(temp != NULL){
                            if(list == NULL)
                            {
                                list = new ListNode(temp->val);
                                listtemp = list;   
                            }
                            else
                            {
                                list->next = new ListNode(temp->val);
                                list = list->next;
                            }
                            temp = temp->next;
                            t--;
                            count--;
                        } 
                    }
                
                v.push_back(listtemp);
                k--;
            }

            return v;
        
    }
};