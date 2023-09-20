// 20 September 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    int ans = INT_MAX;

   // set<int> s;
/*
    int ops(int i,int j, vector<int> &nums,int x,int count)
    {

        if(i >= nums.size() || j < 0)
        {
            return 0;
        }

        if(x == 0)
        {
            s.insert(count);
            return 1;
        }

        int start = 0;
        int last = 0;

        if(nums[i] <= x)
        {
            start =  1 + ops(i+1,j,nums,x-nums[i],count+1);
        }
        
        if(nums[j] <= x)
        {
            last =  1 + ops(i,j-1,nums,x-nums[j],count+1);
        }

        return min(start,last);

    }
*/
    int Dpops(int i,int j, vector<int> &nums,int x,int count,vector<vector<int>>& dp)
    {

        if(i >= nums.size() || j < 0)
        {
            return 0;
        }

        if(x == 0)
        {
            ans = min(ans,count);
            dp[i][j] = count;
            return count;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }

        int start = 0;
        int last = 0;

        if(nums[i] <= x)
        {
            start =  Dpops(i+1,j,nums,x-nums[i],count+1,dp);
        }
        
        if(nums[j] <= x)
        {
            last =  Dpops(i,j-1,nums,x-nums[j],count+1,dp);
        }

       return dp[i][j] = min(start,last);      
    }

    int minOperations1(vector<int>& nums, int x) {
        
        //ops(0,nums.size()-1,nums,x,0);
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(),-1));
    Dpops(0,nums.size()-1,nums,x,0,dp);
/*
        for(auto it : s)
        {
            cout<<it<<" = ";
        }
*/
     /*   for(auto it : dp)
        {
            for(auto i : it)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
*/

       // return *s.begin() > 0 ? *s.begin() : -1;

        return ans == INT_MAX ? -1 : ans;
    }

    int minOperations(vector<int>& v, int x) 
    {
        int i,len=0,sum1=0,sum2=0;
        for(i=0;i<v.size();i++)
            sum2+=v[i];                 
			
        sum2-=x;   
		
        if(sum2==0)        
            return v.size();
			
        int j;i=0;
        for(j=0;j<v.size();j++)
        {
            sum1+=v[j];
			
            while(i<v.size()&&sum1>sum2) 
                sum1-=v[i++];
				
            if(sum1==sum2)  
                len=max(len,j-i+1); 
        }
        if(!len)       
            return -1;
        return v.size()-len;
    }
};