// 12 July 2023

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
    /*
          string s;

          void nodes(ListNode* head)
          {
              if(head == NULL)
              {
                  return ;
              }
              s += to_string(head->val);

              nodes(head->next);
          }


        int getDecimalValue(ListNode* head) {
            nodes(head);

            reverse(s.begin(),s.end());

            int n = 0;

            for(int i = 0 ; i < s.length() ; i++)
            {
                n += ( s[i] - '0' ) * (pow(2, i));
            }
            return n;

        }*/

    int sum;

    int getDecimalValue(ListNode *head)
    {

        if (head == NULL)
        {
            return sum;
        }

        sum = sum * 2 + head->val;
        return getDecimalValue(head->next);
    }
};