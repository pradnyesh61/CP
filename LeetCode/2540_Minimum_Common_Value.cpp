// 21 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {

        int n = nums1.size();
        int m = nums2.size();

        int j = 0;
        int i = 0;

        while (i < n && j < m)
        {
            if (nums1[i] == nums2[j])
            {
                return nums1[i];
            }

            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return -1;
    }
};