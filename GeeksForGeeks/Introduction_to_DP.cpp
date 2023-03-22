//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

vector<long long int> dp(100001, -1);
long long int mod = 1e9 + 7;

class Solution
{

public:
    long long int topDown(int n)
    {
        // code here

        if (n <= 1)
        {
            return n;
        }

        if (dp[n] != -1)
        {
            return dp[n];
        }

        return dp[n] = (topDown(n - 1) + topDown(n - 2)) % mod;
    }
    long long int bottomUp1(int n)
    {
        // code here
        vector<long long int> dp(100001, 0);
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2] % mod;
        }

        return dp[n] % mod;
    }

    long long int spaceOptimization(int n)
    {
        // code here

        long long int prev = 0;
        long long int cur = 1;

        for (int i = 2; i <= n; i++)
        {
            long long int temp = prev + cur;
            prev = cur;
            cur = temp % mod;
        }

        return cur % mod;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 100001; i++)
            dp[i] = -1;
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans)
            cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends