// 9 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int combo(int ind, vector<int> & nums,int target,set<vector<int>>& ans,vector<int> v,
    vector<int>& dp)
    {
        if(target == 0)
        {
            return 1;
        }
        if(target < 0 || ind >= nums.size())
        {
            return 0;
        }

        if(dp[target] !=-1)
        {
            return dp[target];
        }
    
        int sum = 0;
        for(int j =ind; j < nums.size() ; j++)
            {
                {
                    swap(nums[j],nums[ind]);
                    
                    for(int i = ind ; i < nums.size() ; i++)
                    {
                        if(target > 0)
                        {
                            v.push_back(nums[i]);
                            sum += combo(i,nums,target-nums[i],ans,v,dp);
                            v.pop_back();
                        }
                    }
                    swap(nums[j],nums[ind]);
                }
            }
           // cout<<sum<<endl;
            return dp[target] =  sum;
    }


    int combinationSum4(vector<int>& nums, int target) {
    
        vector<int> dp(target+1, -1);
        return helper(nums,target,dp); 
    }

    int helper(vector<int> nums, int target,vector<int>& dp)
    {
        if(target == 0)
        {
            return 1;
        }

        if(dp[target] != -1)
        {
            return dp[target];
        }

        dp[target] = 0;

        for(auto it : nums)
        {
            if(it <= target)
            {
                dp[target] += helper(nums,target-it,dp);
            }
        }

        return dp[target];

    }

    int combinationSum(vector<int>& nums, int target) {
        
        vector<int> v;
        set<vector<int>> ans;
        vector<int> dp(target+1, -1);
        return combo(0,nums,target,ans,v,dp);
       
    }


};