// 2 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
      
        int neg = 0;
        for(int i =0 ; i <nums.size() ;i++)
        {
            if(nums[i] == 0)
            {
                return 0;
            }

            if(nums[i] < 0)
            {
                neg++;
            }    
        }

        if(neg%2 == 0)
        {
            return 1;
        }

        return -1;  
    }

    //so if you do product of integer as below it will overflow because it can reach 100 raise to 1000 so above approach is best

    //  int arraySign(vector<int>& nums) {
        
    //     long long int prod = 1;

    //     for(int i =0 ; i <nums.size() ;i++)
    //     {
    //         prod *= nums[i];
    //     }

    //     if(prod > 0)
    //     {
    //         return 1;
    //     }
    //     if(prod < 0)
    //         return -1;    

    //     return 0;
    // }
};