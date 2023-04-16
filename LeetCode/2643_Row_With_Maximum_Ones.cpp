// 16 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {

        int row = 0;
        int maxcount = 0;
        int m = mat.size();
        int n = mat[0].size();

        for (int i = 0; i < m; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 1)
                {
                    count++;
                }
            }

            if (count > maxcount)
            {
                maxcount = count;
                row = i;
            }
        }

        return {row, maxcount};
    }
};