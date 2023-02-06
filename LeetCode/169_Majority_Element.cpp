// 6 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 /*   int majorityElement(vector<int>& nums) {
        
        map<int,int> m;
        int max = 0;
        int element = 0;
        for(int i = 0 ; i <nums.size();i++)
        {
            m[nums[i]]++;

            if(m[nums[i]] > max)
            {
                max = m[nums[i]];
                element = nums[i];
            } 
        }

        return element;
    }
    */

       int majorityElement(vector<int>& nums) {
        
           sort(nums.begin(),nums.end());
           return nums[nums.size()/2];
    }
};