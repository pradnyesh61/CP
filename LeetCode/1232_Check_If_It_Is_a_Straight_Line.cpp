// 5 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int n = coordinates.size();

        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];

        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];

        for (int i = 2; i < n; i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];

            if ((y - y1) * (x - x2) != (y - y2) * (x - x1))
            {
                return false;
            }
        }
        return true;
    }

    // bool checkStraightLine(vector<vector<int>>& coordinates) {

    //     int x1 = coordinates[0][0];
    //     int y1 = coordinates[0][1];
    //     int x2 = coordinates[0+1][0];
    //     int y2 = coordinates[0+1][1];

    //         int m;
    //     if( x2-x1 == 0)
    //     {
    //        m = y2-y1;
    //     }
    //     else
    //     m = ( y2-y1 ) / ( x2-x1 );

    //     for(int i = 2 ; i < coordinates.size()-1 ; i++)
    //     {
    //         x1 = coordinates[i][0];
    //         y1 = coordinates[i][1];
    //         x2 = coordinates[i+1][0];
    //         y2 = coordinates[i+1][1];

    //         int n;
    //         if( x2-x1 == 0)
    //         {
    //         n = y2-y1;
    //         }
    //         else
    //         n = ( y2-y1 ) / ( x2-x1 );

    //         if(m != n)
    //         {
    //             return false;
    //         }
    //     }

    //     return true;
    // }
};