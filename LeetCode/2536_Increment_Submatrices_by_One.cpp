//15 Jan 2023

#include<bits/stdc++.h>
using namespace std;

// java solution , because in c++ TLE is getting

// class Solution {
//     public int[][] rangeAddQueries(int n, int[][] queries) {
        
//         int arr[][] = new int[n][n];
        
//         for(int[] i : queries)
//         {
//             for(int j = i[0] ; j<= i[2];j++)
//             {
//                 for(int k = i[1]; k<= i[3];k++)
//                 {
//                     arr[j][k]++;
//                 }
//             }
//         }
        
//         return arr;
//     }
// }


class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        
     /*   vector<vector<int>> v(n,vector<int> (n,0));
        
        int m = queries.size();
        for(int i = 0 ; i < m ; i++)
        {
            int x = queries[i][0];
            int y = queries[i][1];
            int x1 = queries[i][2];
            int y1 = queries[i][3];
            
            for(int j = x ; j<= x1 ; j++)
            {
                for(int k = y; k <=  y1 ; k++)
                {
                    v[j][k]++;
                }
            }
            
        }
        
        return v;
       
    }
    */

      vector<vector<int>> v(n,vector<int> (n) );
        
        for(vector<int> i : queries)
        {
            for(int j = i[0] ; j<= i[2];j++)
            {
                for(int k = i[1]; k<= i[3];k++)
                {
                    v[j][k]++;
                }
            }
        }
        return v;
    }
        
};