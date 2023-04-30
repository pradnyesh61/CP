// 30 April 2023

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int bfs(int i , int j , vector<vector<int>> &grid, vector<vector<int>> &vis)
    {
        int sum = 0;   

        int n = grid.size();
        int m = grid[0].size();

        vis[i][j] = 1;

        queue<pair<int,int>> q;
        q.push({i,j});
      
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            sum += grid[row][col]; 
         

            for(int i = 0 ; i < 4; i++)
            {
                int nRow = row + drow[i];
                int nCol = col + dcol[i];

            if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && 
                grid[nRow][nCol] != 0 && vis[nRow][nCol] == 0)
                {
                    q.push({nRow,nCol});
                    vis[nRow][nCol] = 1;
                }
            }

        }

        return sum;
    
    }
    
        
    int findMaxFish(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m,0));

        int ans = 0;

        for(int i = 0 ;i < n ;i++)
        {
            for(int j = 0; j < m ; j++)
            {
                if(vis[i][j] == 0 && grid[i][j] != 0)
                {
                    int k =bfs(i,j,grid,vis);
                   
                    if(ans < k)
                    {
                        ans = k;
                    }
                }
            }
        }

        return ans;
    }
};