//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int recursion(int i, int j, vector<vector<int>> &matrix)
    {
        if (j < 0 || j >= matrix.size())
        {
            return -1e9;
        }

        if (i == matrix.size() - 1)
        {
            return matrix[i][j];
        }

        int leftDiagonal = matrix[i][j] + recursion(i + 1, j - 1, matrix);
        int down = matrix[i][j] + recursion(i + 1, j, matrix);
        int rightDiagonal = matrix[i][j] + recursion(i + 1, j + 1, matrix);

        return max(leftDiagonal, max(down, rightDiagonal));
    }

    int memoization(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &dp)
    {
        if (j < 0 || j >= matrix.size())
        {
            return -1e9;
        }

        if (i == matrix.size() - 1)
        {
            return matrix[i][j];
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        int leftDiagonal = matrix[i][j] + memoization(i + 1, j - 1, matrix, dp);
        int down = matrix[i][j] + memoization(i + 1, j, matrix, dp);
        int rightDiagonal = matrix[i][j] + memoization(i + 1, j + 1, matrix, dp);

        return dp[i][j] = max(leftDiagonal, max(down, rightDiagonal));
    }

    int tabulation(int m, int n, vector<vector<int>> &matrix)
    {
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));

        for (int j = 0; j < m; j++)
        {
            dp[m - 1][j] = matrix[m - 1][j];
        }

        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                int leftDiagonal = -1e9;
                if (j - 1 >= 0)
                {
                    leftDiagonal = matrix[i][j] + dp[i + 1][j - 1];
                }

                int down = matrix[i][j] + dp[i + 1][j];

                int rightDiagonal = -1e9;
                if (j + 1 < m)
                {
                    rightDiagonal = matrix[i][j] + dp[i + 1][j + 1];
                }

                dp[i][j] = max(leftDiagonal, max(down, rightDiagonal));
            }
        }

        return *max_element(dp[0].begin(), dp[0].end());
    }

    int spaceOptimization(int m, int n, vector<vector<int>> &matrix)
    {
        vector<int> prev(n, 0), cur(n);

        for (int j = 0; j < n; j++)
        {
            prev[j] = matrix[m - 1][j];
        }

        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                int leftDiagonal = -1e9;
                if (j - 1 >= 0)
                    leftDiagonal = matrix[i][j] + prev[j - 1];

                int down = matrix[i][j] + prev[j];

                int rightDiagonal = -1e9;
                if (j + 1 < n)
                    rightDiagonal = matrix[i][j] + prev[j + 1];

                cur[j] = max(leftDiagonal, max(down, rightDiagonal));
            }
            prev = cur;
        }

        return *max_element(prev.begin(), prev.end());
    }

    int minFallingPathSum(vector<vector<int>> &matrix)
    {

        // int min = INT_MAX;
        // vector<vector<int>> dp(matrix.size(),vector<int> (matrix[0].size(),-1));

        // for(int j = 0 ; j < matrix[0].size() ; j++)
        // {
        //     // int ans = recursion(0,j,matrix);
        //     int ans = memoization(0,j,matrix,dp);
        //      if(ans < min)
        //     {
        //         min = ans;
        //     }
        // }

        // for(auto it : dp)
        // {
        //     for(auto i : it)
        //     {
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        // return min;

        // return  tabulation(matrix.size(),matrix[0].size(),matrix);
        return spaceOptimization(matrix.size(), matrix[0].size(), matrix);
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        return minFallingPathSum(Matrix);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for (int i = 0; i < N * N; i++)
            cin >> Matrix[(i / N)][i % N];

        Solution ob;
        cout << ob.maximumPath(N, Matrix) << "\n";
    }
    return 0;
}
// } Driver Code Ends