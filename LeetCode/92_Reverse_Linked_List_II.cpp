// 7 September 2023

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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {

        if (left == 1 && right == 1)
        {
            return head;
        }

        ListNode *current = head;
        int count = 1;

        ListNode *start = head;

        while (count < left)
        {
            start = current;
            current = current->next;
            count++;
        }

        ListNode *prev = start->next;
        ListNode *next = current;

        while (count <= right)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }

        if (left == 1)
        {
            start->next = next;
            return prev;
        }

        if (start->next != NULL)
            start->next->next = next;

        start->next = prev;

        return head;
    }
};