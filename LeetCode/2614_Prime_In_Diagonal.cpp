// 9 April 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    // bool prime(int n)
    // {
    //     if(n == 1)
    //     {
    //         return false;
    //     }

    //     for(int i = 2 ; i < n ; i++)
    //     {
    //         if(n%i == 0)
    //         {
    //             return false;
    //         }
    //     }

    //     return true;
    // }

    bool prime(int n)
    {
        if(n == 1)
        {
            return false;
        }

        for(int i = 2 ; i < n/2 ; i++)
        {
            if(n%i == 0)
            {
                return false;
            }
        }

        return true;
    }

     int diagonalPrime(vector<vector<int>>& nums) {

        int i = 0;
        int j = 0;
        int k = nums.size()-1;
        
        vector<int> v;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            v.push_back(nums[i][j]);
            v.push_back(nums[i][k]);
            j++;
            k--;
        }

        sort(v.begin(),v.end(),greater<int>());

        for(int i = 0 ; i < v.size() ; i++)
        {
            if(prime(v[i]))
            {
                return v[i];
            }
        }

        return 0;

    }

    // int diagonalPrime(vector<vector<int>>& nums) {

    //     int i = 0;
    //     int j = 0;
    //     int k = nums.size()-1;

    //     int maxi = 0;

    //     for(int i = 0 ; i < nums.size() ; i++)
    //     {
    //         if(prime(nums[i][j]))
    //         {
    //             maxi = max(nums[i][j],maxi);
    //         }

    //         if(prime(nums[i][k]))
    //         {
    //             maxi = max(nums[i][k],maxi);
    //         }

    //         j++;
    //         k--;

    //     }

    //     return maxi;

    // }
};