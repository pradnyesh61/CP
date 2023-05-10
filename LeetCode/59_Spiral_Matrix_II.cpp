// 10 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // bool check(int i, int n)
    // {
    //     return i == n*n+1;
    // }

    // vector<vector<int>> generateMatrix(int n) {

    //     int count = 1;
    //     vector<vector<int>> v(n, vector<int> (n,0));

    //     int left = 0, right = n-1;
    //     int top = 0 , down = n-1;

    //    while(count != n*n+1)
    //    {

    //        for(int i = left ; i <= right ; i++)
    //        {
    //            v[top][i] = count++;
    //            if(check(count,n))
    //            {
    //                return v;
    //            }
    //         }
    //        top++;

    //        for(int i = top ; i <= down ; i++)
    //        {
    //            v[i][right] = count++;
    //            if(check(count,n))
    //            {
    //                return v;
    //            }
    //        }
    //        right--;

    //        for(int i = right; i >= left ; i--)
    //        {
    //            v[down][i] = count++;
    //            if(check(count,n))
    //            {
    //                return v;
    //            }
    //        }
    //        down--;

    //        for(int i = down ; i >= top ; i--)
    //        {
    //            v[i][left] = count++;
    //            if(check(count,n))
    //            {
    //                return v;
    //            }
    //        }
    //        left++;
    //    }

    //     return v;
    // }

    vector<vector<int>> generateMatrix(int n)
    {

        int count = 1;
        vector<vector<int>> v(n, vector<int>(n, 0));

        int left = 0, right = n - 1;
        int top = 0, down = n - 1;

        for (int j = 1; j <= (n + 1) / 2; j++)
        {

            for (int i = left; i <= right; i++)
            {
                v[top][i] = count++;
            }
            top++;

            for (int i = top; i <= down; i++)
            {
                v[i][right] = count++;
            }
            right--;

            for (int i = right; i >= left; i--)
            {
                v[down][i] = count++;
            }
            down--;

            for (int i = down; i >= top; i--)
            {
                v[i][left] = count++;
            }
            left++;
        }

        return v;
    }
};