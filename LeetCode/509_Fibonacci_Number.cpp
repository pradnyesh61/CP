// 9 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

//Brute Force
    //     int sum = 0;

    //    int fib1(int n,int a,int b)
    //     {
    //         if(n == 2)
    //         {
    //             return sum;
    //         }
    //         sum = a+b;
    //        return fib1(--n,b,a+b);

    //     }

    //     int fib(int n) {
    //         if(n == 0)
    //         {
    //             return 0;
    //         }
    //         if(n == 1 || n == 2 )
    //         {
    //             return 1;
    //         }

    //        return fib1(n,1,1);
    //     }

    // int monotization(int n,vector<int> &dp) {

    //    if(n <= 1)
    //    {
    //        return n;
    //    }

    //    if(dp[n] != -1)
    //    {
    //        return dp[n];
    //    }

    //    return dp[n] = monotization(n-1,dp)+monotization(n-2,dp);
    // }

    // int fib(int n) {

    //    vector<int> dp(n+1,-1);

    //    int ans = monotization(n,dp);

    //    return ans;
    // }

    //     int fib(int n) {
    // //Tabulation
    // if(n <= 1)
    // {
    //     return n;
    // }
    //         vector<int> dp(n+1,-1);

    //         dp[0] = 0;
    //         dp[1] = 1;

    //         for(int i = 2 ; i <= n; i++)
    //         {
    //             dp[i] = dp[i-1]+dp[i-2];
    //         }

    //       return dp[n];
    //     }
    // };

    int fib(int n)
    {
        // space optimization
        if (n <= 1)
        {
            return n;
        }
        int prev2 = 0;
        int prev = 1;

        for (int i = 2; i <= n; i++)
        {
            int curi = prev2 + prev;
            prev2 = prev;
            prev = curi;
        }

        return prev;
    }
};