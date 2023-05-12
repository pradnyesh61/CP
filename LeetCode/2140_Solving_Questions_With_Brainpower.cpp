// 12 May 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    long long recursion(int i , vector<vector<int>>& questions)
    {
        if(i >= questions.size())
        {
            return 0;
        }


        long long take = questions[i][0] + recursion(i+questions[i][1]+1,questions);

        long long notTake = recursion(i+1,questions);

        return max(take,notTake);
    }

     long long memoization(int i , vector<vector<int>>& questions,vector<long long> &dp)
    {

        if(i >= questions.size())
        {
            return 0;
        }


        if(dp[i] != -1)
        {
            return dp[i];
        }


        long long take = questions[i][0] + memoization(i+questions[i][1]+1,questions,dp);

        long long notTake = memoization(i+1,questions,dp);

        return dp[i] = max(take,notTake);
    }

   

   

    long long mostPoints(vector<vector<int>>& questions) {

        vector<long long> dp(questions.size(),-1);
        //return recursion(0,questions);
       
        return memoization(0,questions,dp);

    }
};