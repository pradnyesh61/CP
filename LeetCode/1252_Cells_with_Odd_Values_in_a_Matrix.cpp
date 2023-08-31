// 31 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int oddCells(int m, int n, vector<vector<int>> &indices)
    {

        vector<vector<int>> mat(m, vector<int>(n, 0));

        for (int i = 0; i < indices.size(); i++)
        {

            for (int j = 0; j < n; j++)
            {
                mat[indices[i][0]][j]++;
            }
            for (int j = 0; j < m; j++)
            {
                mat[j][indices[i][1]]++;
            }
        }

        int count = 0;

        for (auto it : mat)
        {
            for (auto i : it)
            {
                if (i % 2 != 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};