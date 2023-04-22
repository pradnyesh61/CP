// 22 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int lcs(int i, int j, string s, string s1)
    {
        if(i < 0 || j < 0)
        {
            return 0;
        }

        if(s[i] == s1[j])
        {
            return 1 + lcs(i-1,j-1,s,s1);
        }

        return max(0 + lcs(i-1,j,s,s1), 0 + lcs(i,j-1,s,s1));
    }

    int memoization(int i , int j , string s, string s1, vector<vector<int>> &dp)
    {
        if(i < 0 || j < 0)
        {
            return 0;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if(s[i] == s1[j])
        {
            return dp[i][j] =  1 + memoization(i-1,j-1,s,s1,dp);
        }

        return dp[i][j] = max(memoization(i-1,j,s,s1,dp) , memoization(i,j-1,s,s1,dp));
    }

    int tabulation(string s,string s1, int l)
    {
        vector<vector<int>> dp(l+1, vector<int>(l+1,0));

        for(int i = 1 ; i <= l; i++)
        {
            for(int j = 1; j <= l; j++)
            {
                if(s[i-1] == s1[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        for(auto it : dp)
        {
            for(auto i : it)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

       // print_char(dp,l,s,s1);


        return l-dp[l][l];
    }

    int spaceOptimization(string s, string s1, int l)
    {
        vector<int> prev(l+1,0);
        vector<int> cur(l+1,0);

        for(int i = 1 ; i <= l ; i++)
        {
            for(int j = 1; j <= l ; j++)
            {
                if(s[i-1] == s1[j-1])
                {
                    cur[j] = 1 + prev[j-1];
                }
                else
                {
                    cur[j] = max(prev[j] , cur[j-1]);
                }
            }

            // for(auto it : prev)
            // {
            //     cout<<it<<" ";
            // }
            // cout<<endl;

            prev = cur;
        }

        return l-prev[l];
    }

    void print_char(vector<vector<int>> &dp,int l,string s,string s1)
    {
        int i = l;
        int j = l;

        string temp = "";
        string common = "";

        while(i > 0 || j > 0)
        {
            cout<<s[i-1]<<" "<<s[j-1]<<endl;
            if(s[i-1] == s1[j-1])
            {
                common += s[i];
                if(i > 0)
                    i--;
                if(j > 0)
                    j--;
            }
            else{
                int a = dp[i-1][j];
                int b = dp[i][j-1];

                if(a < b)
                {
                    temp += s[i-1];
                    i--;
                }
                else{
                    temp += s1[j-1];
                    j--;
                }
            }
        }

        cout<<"temp = "<<temp<<endl;
        cout<<"common = "<<common<<endl;
    }


    int minInsertions(string s) {

        string s1 = s;
        reverse(s.begin(),s.end());

        int l = s.size();

        //int k = lcs(l-1,l-1,s,s1);

       // vector<vector<int>> dp(l, vector<int> (l,-1)); 
       // int k = memoization(l-1,l-1,s,s1,dp);
        
        // for(auto it : dp)
        // {
        //     for(auto i : it)
        //     {
        //         cout<<i << " ";
        //     }
        //     cout<<endl;
        // }

       // return l-k;

    //    so we can take the return value from the memoization or we can use the dp value as it will also store the same value 

        // memoization(l-1,l-1,s,s1,dp);
        // return l - dp[l-1][l-1];

        return tabulation(s,s1,l);
        //return spaceOptimization(s,s1,l);
    }
};