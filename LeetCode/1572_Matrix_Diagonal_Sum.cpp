// 8 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int diagonalSum(vector<vector<int>>& mat) {
        
    //     int sum = 0;
        
    //     int i =0;
    //     int j = mat.size()-1;

    //     for(int k = 0; k < mat.size() ; k++)
    //     {
    //         if(i == j)
    //         {
    //             sum += mat[k][i];
    //         }
    //         else{
    //             sum += mat[k][i] + mat[k][j];
    //         }
    //         i++;
    //         j--;
    //     }
    //     return sum;
    // }

     int diagonalSum(vector<vector<int>>& mat) {
        
        int sum = 0;
        int n = mat.size()-1;

        for(int i = 0; i <= n ; i++)
        {
            if(i == n-i)
            {
                sum += mat[i][i];
            }
            else{
                sum += mat[i][i] + mat[i][n-i];
            }
          
        }
        return sum;
    }
};