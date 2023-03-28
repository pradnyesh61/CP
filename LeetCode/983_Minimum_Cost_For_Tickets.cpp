// 28 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int recursion(int i,vector<int> &days, vector<int>& costs, vector<int> &dp)
    {
       
        if(i >= days.size())
        {
            return 0;
        }

        if(dp[i] != -1)
        {
            return dp[i];
        }

     
        int day1 = costs[0] + recursion(i+1,days,costs,dp);


        int temp7 = days[i]+7;
        int j = i;
        while(temp7 > days[j] && j < days.size() )
        {
            j++;
        }

        int day7 = costs[1] + recursion(j,days,costs,dp);

        
      
        int temp30 = days[i]+30;
        j = i;
        while(temp30 > days[j] && j < days.size() )
        {
            j++;
        }

        int day30 = costs[2] + recursion(j,days,costs ,dp);        
       
        return dp[i] =  min(day1,min(day7,day30));
    }

    int memoizaton(int i,vector<int> &days, vector<int>& costs,vector<vector<int>> &dp) 
    {

        if(i >= days.size())
        {
            return 0;
        }

        if(dp[i][days[i]] != -1)
        {
            return dp[i][days[i]];
        }

        int day1 = costs[0] + memoizaton(i+1,days,costs,dp);

        int j = i;

        for( ; j < days.size() ; j++)
        {
            if(days[j] >= days[i]+7)
            {
                break;
            }
        }

        int day7 = costs[1] + memoizaton(j,days,costs,dp);

        
        for(j = i; j < days.size() ; j++)
        {
            if(days[j] >= days[i] + 30)
            {
                break;
            }
        } 

        int day30 = costs[2] + memoizaton(j,days,costs,dp);

        return dp[i][days[i]] = min(day1, min(day7,day30));

    }  

    int memoizaton1(int i,vector<int> &days, vector<int>& costs,vector<int> &dp) 
    {

        if(i >= days.size())
        {
            return 0;
        }

        if(dp[i] != -1)
        {
            return dp[i];
        }

        int day1 = costs[0] + memoizaton1(i+1,days,costs,dp);

        int j = i;

        for( ; j < days.size() ; j++)
        {
            if(days[j] >= days[i]+7)
            {
                break;
            }
        }

        int day7 = costs[1] + memoizaton1(j,days,costs,dp);

        
        for(j = i; j < days.size() ; j++)
        {
            if(days[j] >= days[i] + 30)
            {
                break;
            }
        } 

        int day30 = costs[2] + memoizaton1(j,days,costs,dp);

        return dp[i] = min(day1, min(day7,day30));

    }  



    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1, -1);
       // return recursion(0,days,costs,dp);
       // vector<vector<int>> dp(days.size(), vector<int> (days[days.size()-1]+1,-1));
        //return memoizaton(0,days,costs,dp);

        // vector<int> dp(days.size()+1, -1);
         return memoizaton1(0,days,costs,dp);
    
    }
};