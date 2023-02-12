// 12 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
     
        long long n = nums.size();
        
        long long sum = 0;
        
        for(long long i = 0 ; i < n/2 ;i++)
        {
            
            string s = to_string(nums[i]);
            string s1 = to_string(nums[n-i-1]);

            string s2 = s+s1;
            long long t = stoi(s2);
            sum += t;
            
        }
        
        if(n%2 != 0)
        {
            string s = to_string(nums[n/2]);
            sum+= stoi(s);
        }
    
        return sum;
    }
    
    
};