// 17 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        
        int sum = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            int bits = 0;

            int n = i;

            while(n)
            {
                if(n%2 == 1)
                {
                    bits++;
                }

                n = n/2;
            }

            if(bits == k)
            {
                sum += nums[i];
            }

        }
        return sum;
    }
};