// 17 May 2023

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

private:
    vector<int> nums;

public:
    int pairSum(ListNode *head)
    {

        while (head != NULL)
        {
            nums.push_back(head->val);
            head = head->next;
        }

        int maxi = 0;
        int n = nums.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (nums[i] + nums[n - i - 1] > maxi)
            {
                maxi = nums[i] + nums[n - i - 1];
            }
        }

        return maxi;
    }
};