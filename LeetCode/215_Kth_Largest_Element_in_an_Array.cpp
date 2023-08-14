// 14 August 2023
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int> pq(nums.begin(),nums.end());

        while(--k && (!pq.empty()))
        {
            pq.pop();
            
        }

        if(!pq.empty())
        {
            return pq.top();
        }

        return 0;
    }
};