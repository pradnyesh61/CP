// 6 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        int n = nums.size();
        if (!n)
        {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int maxi = 1;
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] - nums[i - 1] == 1)
            {
                count++;
                maxi = max(count, maxi);
            }
            else if (nums[i] == nums[i - 1])
                continue;
            else
                count = 1;
        }

        /* for(int i = 0; i< n ; i++)
         {
             if(i+1 < n && nums[i]+1 == nums[i+1])
             {
                count += 1;
             }
             else if(i+1 < n && nums[i] == nums[i+1])
                 {
                     while(i+1 < n && nums[i] == nums[i+1])
                     {
                         i++;
                     }
                     i--;
                 }
             else{

                 count = 1;
             }

              maxi = max(count,maxi);

         }
         */

        return maxi;
    }
};