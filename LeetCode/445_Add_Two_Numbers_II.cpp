// 17 July 2023

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
    vector<int> a;
    vector<int> b;

    int i = 0;
    int j = 0;

    int carry = 0;

    void listn(ListNode *l1)
    {
        if (l1 == NULL)
        {
            return;
        }

        listn(l1->next);
        l1->val = sum();
    }

    int sum()
    {
        int x = 0;
        int z = 0;

        i--;
        j--;

        if (i >= 0)
        {

            x = a[i];
        }

        if (j >= 0)
        {

            z = b[j];
        }

        carry = carry + x + z;

        int q = carry % 10;

        carry /= 10;
        return q;
    }

    ListNode *addn(ListNode *l1)
    {
        ListNode *head = NULL;
        ListNode *prev = NULL;
        ListNode *t = NULL;

        cout << "h" << endl;

        while (i >= 0 || j >= 0)
        {
            cout << "i" << i << " " << j << endl;
            if (head == NULL)
            {
                head = new ListNode(sum());
                t = head;
            }
            else
                head = new ListNode(sum());

            prev = head;

            head = head->next;
        }
        cout << "b" << endl;
        prev->next = l1;
        return t;
    }

    long long int lengthn(ListNode *l1)
    {

        long long int count1 = 0;
        while (l1 != NULL)
        {
            count1++;
            a.push_back(l1->val);
            l1 = l1->next;
        }

        return count1;
    }

    long long int lengthnb(ListNode *l1)
    {

        long long int count1 = 0;
        while (l1 != NULL)
        {
            count1++;
            b.push_back(l1->val);
            l1 = l1->next;
        }

        return count1;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        long long int count1 = lengthn(l1);
        long long int count2 = lengthnb(l2);

        i = a.size();
        j = b.size();

        cout << i << " = " << j << endl;

        if (count1 == 0 && count2)
        {
            return l2;
        }
        if (count2 == 0 && count1)
        {
            return l1;
        }

        if (count1 > count2)
        {
            listn(l1);
            if (i || carry)
                return addn(l1);

            return l1;
        }

        listn(l2);
        if (j || carry)
            return addn(l2);

        return l2;
    }
};