// 22 November 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // vector<int> findDiagonalOrder(vector<vector<int>>& nums) {

    //  vector<int> ans;

    //  int n = nums.size();

    // int m = 0;

    //  for(int i = 0; i< n; i++)
    //  {
    //     int k = 0;
    //     int a = nums[i].size();
    //     m = max(a,m);

    //     for(int j = i; j >=0 ; j--)
    //     {
    //         if(k < nums[j].size())
    //         {
    //             ans.push_back(nums[j][k]);
    //         }
    //         k++;
    //     }
    //  }

    //  for(int i = 1; i <= m; i++)
    //  {
    //     int k = i;

    //     for(int j = n-1 ; j >= 0 ; j--)
    //     { 
    //         if(k < nums[j].size())
    //         {
    //             ans.push_back(nums[j][k]);
    //         }

    //         k++;
    //     }
    //  }

    // return ans;

    // } 

    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
    
    vector<int> ans;
    int n = nums.size();

    map<int,vector<int>> m;

    for(int row = n-1; row >= 0 ; row--)
    {
        for(int col = 0; col < nums[row].size() ; col++)
        {
            m[row+col].push_back(nums[row][col]);
        }
    }

    for(auto it : m){
        for(auto i : it.second)
            ans.push_back(i);
    }
    
    return ans;

    } 
  
};