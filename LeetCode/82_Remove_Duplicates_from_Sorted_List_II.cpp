// 2 August 2023

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
class Solution
{
public:
    void deletenode(ListNode *prev, ListNode *current, ListNode *next_temp)
    {

        if (next_temp == NULL)
        {
            return;
        }

        if (current->val == next_temp->val)
        {
            while (next_temp != NULL && current->val == next_temp->val)
            {
                next_temp = next_temp->next;
            }
            prev->next = next_temp;
            if (next_temp == NULL || next_temp->next == NULL)
            {
                return;
            }
            deletenode(prev, next_temp, next_temp->next);
        }
        else
        {
            deletenode(current, next_temp, next_temp->next);
        }
    }

    /*  bool headcheck(ListNode* head)
      {
           while(head->next !=NULL && head->val == head->next->val)
          {
              check = true;
              head = head->next;
          }
      }

      */

    vector<int> v;

    void traver(ListNode *head)
    {
        if (head == NULL)
        {
            return;
        }

        v.push_back(head->val);
        traver(head->next);
    }

    ListNode *deleteDuplicates(ListNode *head)
    {

        if (head == NULL)
        {
            return head;
        }

        int i = 0;
        int j = 1;

        traver(head);

        if (v.size() == 1)
        {
            return head;
        }

        vector<int> ans;

        while (i < v.size() && j < v.size())
        {
            if (v[i] != v[j])
            {
                ans.push_back(v[i]);
                i++;
                j++;
            }
            else
            {
                while (j < v.size() && (v[i] == v[j]))
                {
                    j++;
                }
                i = j;
                j++;
            }
        }

        if (j <= v.size() && j - 1 >= 0 && j - 2 >= 0 && v[j - 2] != v[j - 1])
        {
            ans.push_back(v[j - 1]);
        }

        ListNode *temp2 = head;

        if (ans.size() == 0)
        {
            return NULL;
        }

        for (int i = 0; i < ans.size(); i++)
        {
            temp2->val = ans[i];
            if (i + 1 == ans.size())
            {
                temp2->next = NULL;
                break;
            }
            temp2 = temp2->next;
        }

        temp2 = NULL;

        return head;
    }
};