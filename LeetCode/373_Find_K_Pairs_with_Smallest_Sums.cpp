// 28 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        // priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<intpair<int,int>>>>pq;
        priority_queue<pair<int, pair<int, int>>> pq;
        int n = nums1.size();
        int m = nums2.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = nums1[i] + nums2[j];
                if (pq.size() < k)
                    pq.push({sum, {nums1[i], nums2[j]}});
                else if (sum < pq.top().first)
                {
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else
                    break;
            }
        }

        vector<vector<int>> v;
        while (!pq.empty())
        {
            v.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }

        return v;
    }
};