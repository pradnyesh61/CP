//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int mod = 1e9 + 7;

class Solution
{
    public:
    
    int TopDownRecursive(int n, vector<int> &dp)
    {
        if(n <= 1)
        {
            return 1;
        }
        
       if(dp[n] != -1)
        return dp[n];
        
        return dp[n] = (TopDownRecursive(n-1,dp) + TopDownRecursive(n-2,dp) ) % mod;
        
    }
    
    int BottomUp(int n)
    {
        vector<int> dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            dp[i] = (dp[i-1]+dp[i-2])%mod;
        }
        
        return dp[n];
    }
    
    int spaceOptimization(int n)
    {
       int prev = 1;
       int cur = 1;
        
        for(int i = 2; i <= n; i++)
        {
            int temp = prev + cur;
            prev = cur;
            cur = temp % mod;
        }
        
        return cur;
    }
    
    
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        vector<int> dp(n+1,-1);
        
       // cout<<"Bottormup = "<<BottomUp(n)<<endl;
       // cout<<"Bottormup = "<<TopDownRecursive(n,dp)<<endl;
       // cout<<"spaceOptimization = "<<spaceOptimization(n)<<endl;
        
        return spaceOptimization(n);
        
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends