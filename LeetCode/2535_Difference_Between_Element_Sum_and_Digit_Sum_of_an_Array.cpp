//15 Jan 2023

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
     int sumd = 0;
    int sume = 0;
        
        for(int i = 0 ;i < nums.size()  ; i++)
        {
            sume += nums[i];
            
            int n = nums[i];
            
            while(n)
            {
                sumd += (n%10);
                n /= 10;
            }
        }
        
        return abs(sume-sumd);
    }
};