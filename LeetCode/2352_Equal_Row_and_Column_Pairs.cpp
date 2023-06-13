// 13 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int row = 0;
        int col = 0;

        int count = 0;
        int n = grid.size();

        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j< n ; j++)
            {
                bool flag = true;
               
               for(int  k = 0 ; k < n ; k++)
               {
                //cout<<grid[i][k]<<" != "<<grid[k][j]<<endl;
                   if(grid[i][k] != grid[k][j])
                   {
                        flag = false;
                        break;
                   }
               }
              // cout<<endl;
               if(flag)
                {
                  //  cout<<"Hi"<<endl;
                    count++;
                }
            }
           // cout<<endl;
        }

        return count;

    }
};