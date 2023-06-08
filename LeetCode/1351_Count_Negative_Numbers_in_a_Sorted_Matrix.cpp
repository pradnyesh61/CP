// 8 June 2023

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countNegatives1(vector<vector<int>>& grid) {
        
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();

        for(int i = m-1 ; i >= 0 ;i--)
        {
            for(int j = n-1 ; j >= 0 ; j--)
            {
                if(grid[i][j] >= 0)
                {
                    break;
                }
                count++;
            }
        }

        return count;
    }

     int countNegatives(vector<vector<int>>& grid) {
        
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();


        for(int i = 0 ; i < m ;i++)
        {
            int start =0;
            int end = n-1;

            if(grid[i][start] < 0)
            {
                count += n;
                continue;
            }
            while(start <= end)
            {
                int mid = (start+end)/2;
                
                if(grid[i][mid] < 0)
                {
                    end = mid-1;
                }
                else
                if(grid[i][mid] >= 0)
                {
                    start = mid+1;
                }
            }
            count += (n - end-1);
            
        }
        return count;
    }
};