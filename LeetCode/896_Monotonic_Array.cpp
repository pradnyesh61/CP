// 29 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 1)
        {
            return true;
        }

        int a = nums[0];

        int b = 0;

       for(int i = 1 ; i< n;i++)
       {
           if(nums[i] != a)
           {
               b = nums[i];
               break;
           }
       }

       if(a == b)
       {
           return true;
       }

        if(a > b)
        {
            for(int i = 1; i < n ; i++)
            {
                if(nums[i-1] < nums[i])
                {
                    return false;
                }
            }
        }
        else{
            for(int i = 1; i < n ; i++)
            {
                if(nums[i-1] > nums[i])
                {
                    return false;
                }
            }
        }

        return true;

    }
};