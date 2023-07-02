// 2 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:/*
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        
        int count = 0;
        bool even = false;
        bool odd = true;

        int maxi = 0;

        for(int i =0 ; i <nums.size() ; i++)
        {
            if(nums[i] > threshold)
            {
                even = false;
                odd=true;
                maxi = max(maxi,count);
                count = 0;
            }
            else if(even)
            {
                if(nums[i]%2 != 0 && odd)
                {
                    count++;
                    odd = false;
                }
                else if(odd == false && nums[i] % 2 == 0){
                    count++;
                    odd = true;
                }
                else{
                    even = false;
                    odd=true;
                    maxi = max(maxi,count);
                    count = 0;
                }
            }
            else if(nums[i] %2 == 0)
            {
                even = true;
                count++;
            }
            
        }
        maxi = max(maxi,count);
        return maxi;
    }
    */
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        
        int count = 0;
        bool even = false;
        bool odd = true;

        int maxi = 0;

        for(int i =0 ; i <nums.size() ; i++)
        {
            if(nums[i] % 2 == 0 && nums[i] <= threshold)
            {
                count++;
              
                if(i+1 < nums.size())
                {
                    for(int j = i+1 ; j < nums.size() ;j++)
                    {
                        if(nums[j-1] <= threshold && nums[j] <= threshold && nums[j-1]%2 != nums[j]%2)
                        {
                            count++;
                        }
                        else{
                            break;
                        }
                    }
                }
                maxi = max(maxi,count);
                count = 0;
            }
            
        }
        maxi = max(maxi,count);
        return maxi;
    }
};