// 11 jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int count = 0;

        for(int i = 0 ; i <nums.size()-1 ;i++)
        {
           if(nums[i] >= nums[i+1])
            {
                int t = (nums[i]-nums[i+1])+1;
                nums[i+1] += t;
                count += t;
            }
        }

        return count;
    }
};

int main()
{
    Solution s;
    vector<int> v ={1,5,2,4,1};
    cout<<s.minOperations(v);
}