// 8 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        
       sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
    }
};