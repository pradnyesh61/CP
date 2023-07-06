// 6 July 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:


    int subarray(int i, int l, int target, vector<int>& nums)
    {

        if(target <= 0)
        {
            return l;
        }

        if(i == nums.size())
        {
            return INT_MAX;
        }


        return min(subarray(i+1,l+1,target-nums[i],nums),
                    subarray(i+1,l,target,nums));
    }

    /*  int subarray(int i, int l, int target, vector<int>& nums,vector<vector<int>> &dp)
    {

        if(target <= 0)
        {
            return l;
        }

        if(i == nums.size())
        {
            return INT_MAX;
        }

        if(dp[i][l] != -1)
        {
            return dp[i][l];
        }
      

         dp[i][l] = min(subarray(i+1,l+1,target-nums[i],nums,dp),
                    subarray(i+1,l,target,nums,dp));\

        cout<<dp[i][l]<<" = ";
        return dp[i][l];
    }


*/
/*
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0;
        for(auto it : nums)
        {
            sum += it;
        }

        vector<vector<int>> dp(nums.size()+2, vector<int>(nums.size()+2,-1));

        int ans =  subarray(0,0,target,nums,dp);

        cout<<endl<<ans<<endl;

        int mini = INT_MAX;

        for(auto it : dp)
        {
            for(auto i : it)
            {
                if(i != -1 && i < mini)
                {
                    mini = i;
                } 
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return mini;

        return ans == INT_MAX ? 0 : ans;

       /* 
        int sum = 0;
        int n = nums.size();
        int l = 0;
        int mini= INT_MAX;
        int j = 0;

        for(int i = 0; i< n; i++)
        {
            if(sum < target)
            {
                l++;
                sum += target;
            }

            if(sum >= target)
            {
                mini = min(mini,l);
                l--;
                
            }

        }
        */
    int minSubArrayLen(int target, vector<int>& nums) {

        int sum = 0;
        int count = 0;
        int mini = INT_MAX;
        int j = 0;

        for(int i =0 ; i < nums.size() ; i++)
        {
            if(sum < target)
            {
                count++;
                sum += nums[i];
            }

            if(sum >= target)
            {
                mini = min(count,mini);
                
                while(sum >= target)
                {
                    sum -= nums[j];
                    count--;
                    if(sum >= target)
                    mini = min(count,mini);
                    j++;
                }
                
            }

        }    

        return mini == INT_MAX ? 0 : mini;

    }
};