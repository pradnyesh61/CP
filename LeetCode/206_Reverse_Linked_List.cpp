// 19 Jan 2023

#include <bits/stdc++.h>
using namespace std;

   struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

class Solution {
public:

vector<int> v;

    ListNode* reverseList(ListNode* head) {

        if(head == NULL)
        {
            return head;
        }

        if(head->next == NULL )
        {
            v.push_back(head->val);
            head->val = v[0];
          
            return head;
        }

        v.push_back(head->val);

        reverseList(head->next);
      
         v.erase(v.begin());
        head->val = v[0];
       

        return head;

    }
};