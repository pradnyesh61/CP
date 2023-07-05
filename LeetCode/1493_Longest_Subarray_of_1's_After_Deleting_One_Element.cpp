// 5 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int longest(int i, vector<int> &nums, int count, int maxi,int delet)
    {

        if(i >= nums.size())
        {
            if(count == nums.size())
                count--;
            
            return count;
        }

        int take = 0;
        
        if(nums[i] == 0 && delet == 0)
        {
            delet = 1;
        }
        else if(nums[i] == 0 && delet == 1){
            return count;
        }
        
        int q= count;
        if(nums[i] == 1)
        {
            q = count+1;
        }
        
        return max(longest(i+1, nums,q,maxi,delet),longest(i+1,nums,0,maxi,0));
    

       // int notTake = max(longest(i+1,nums,count,maxi,delet),  longest(i+1,nums,count,maxi,0));

      //  return max(take,notTake);
    }

    int longestSubarray(vector<int>& nums) {

        int count =0, maxi = 0,c = 0;
        for(int i = 0; i  <nums.size() ;i++)
        {
            if(nums[i] == 1)
            {
                count++;
            }
            else{
                c = count;
                count=0;
            }
            maxi = max(maxi,count+c);
        }

        if(maxi == nums.size())
        {
            return maxi-1;
        }
        return maxi;
      /* 
       vector<vector<int>> dp(nums.size(), vector<int> );
       return longest(0,nums,0,0,0);

        int n = nums.size();
        int maxi = 0;

        for(int i = 0; i < n ; i++)
        {
            int count = 0;
            int delet = 0;
            
            for(int j = i ; j < n ; j++)
            {
                if(nums[j] == 0 && delet == 0)
                {
                    delet = 1;
                }else if(nums[j] == 0 && delet == 1){
                    break;
                }
                else if(nums[j] == 1)
                {
                    count++;
                }
            }

            if(delet == 0)
            {
                count--;
            }

            if(count == n-1)
            {
                return count;
            }

            maxi = max(maxi, count);
        }

        return maxi;*/
    }
};