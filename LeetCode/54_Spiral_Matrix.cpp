// 9 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int leftEdge, int rightEdge, int downEdge, int topEdge)
    {
        if (leftEdge > rightEdge || topEdge > downEdge)
            return true;

        return false;
    }

    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        int m = matrix.size();
        int n = matrix[0].size();

        int leftEdge = 0;
        int rightEdge = n - 1;
        int downEdge = m - 1;
        int topEdge = 0;

        vector<int> v;

        while (leftEdge <= rightEdge || topEdge <= downEdge)
        {
            for (int j = leftEdge; j <= rightEdge; j++)
            {
                v.push_back(matrix[topEdge][j]);
            }
            topEdge++;
            if (check(leftEdge, rightEdge, downEdge, topEdge))
            {
                break;
            }

            for (int j = topEdge; j <= downEdge; j++)
            {
                v.push_back(matrix[j][rightEdge]);
            }
            rightEdge--;
            if (check(leftEdge, rightEdge, downEdge, topEdge))
            {
                break;
            }

            for (int j = rightEdge; j >= leftEdge; j--)
            {
                v.push_back(matrix[downEdge][j]);
            }
            downEdge--;
            if (check(leftEdge, rightEdge, downEdge, topEdge))
            {
                break;
            }

            for (int j = downEdge; j >= topEdge; j--)
            {
                v.push_back(matrix[j][leftEdge]);
            }

            leftEdge++;
        }

        return v;
    }
};