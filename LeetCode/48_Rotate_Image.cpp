// 9 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {

        int n = matrix.size();

        /*
           map<int,vector<int>> m;
           for(int i = 0; i< n ; i++)
           {
               vector<int> v;
               for(int j = n-1; j >= 0 ; j--)
               {
                   v.push_back(matrix[j][i]);
               }

               m[i] = v;
           }

           for(int i = 0; i< n ; i++)
           {
               vector<int> v = m[i];
               for(int j = 0 ; j < n ; j++)
               {
                   matrix[i][j]  = v[j];
               }
           }

           */

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};