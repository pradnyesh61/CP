// 21 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {

        long long subarray = 0;
        long long count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                subarray++;
                count += subarray;
            }
            else
            {
                subarray = 0;
            }
        }
        return count;
    }
    // long long zeroFilledSubarray(vector<int>& nums) {

    //     long long  count = 0;
    //     for(int i = 0  ; i < nums.size() ; i++)
    //     {
    //         vector<int> v;

    //         for(int j = i ;  j < nums.size();j++)
    //         {
    //             bool check = true;
    //             v.push_back(nums[j]);
    //             for(auto it : v)
    //             {
    //                 if(it != 0)
    //                 {
    //                     check = false;
    //                     break;
    //                 }
    //             }

    //             if(check)
    //             {
    //                 count++;
    //             }
    //         }

    //     }
    //   return count;
    // }
};