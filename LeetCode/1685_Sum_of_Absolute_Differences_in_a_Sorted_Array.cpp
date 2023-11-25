// 25 November 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {


public:

  vector<int> g1etSumAbsoluteDifferences(vector<int>& nums) {

        vector<int> ans;

        int n = nums.size();

        for(int i= 0 ; i < n; i++)
        {
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                int k = nums[i]-nums[j];
                sum = sum + abs(k);
            }
            
            ans.push_back(sum);

        }
        return ans;
    }


    // vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
    //     int sum = 0;

    //     for(auto it : nums)
    //     {
    //         sum += it;
    //     }

    //     vector<int> ans;

    //     int n = nums.size();

    //     for(auto it : nums)
    //     {
    //         ans.push_back((it*n) - sum);
    //     }

    //     return ans;
    // }

  
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix = {nums[0]};
        for (int i = 1; i < n; i++) {
            prefix.push_back(prefix[i - 1] + nums[i]);
        }
        
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int leftSum = prefix[i] - nums[i];
            int rightSum = prefix[n - 1] - prefix[i];
            
            int leftCount = i;
            int rightCount = n - 1 - i;
            
            int leftTotal = leftCount * nums[i] - leftSum;
            int rightTotal = rightSum - rightCount * nums[i];
            
            ans.push_back(leftTotal + rightTotal);
        }
        
        return ans;
    }
};