// The problem statment is tricky but if you see the input , the array is containing the roteted array
// so here just need to check if the target is present in array or not 
// if it is , then retun it's index otherwise -1 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        for(int i = 0; i < n ; i++)
        {
            if(nums[i] == target)
                return i;
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<s.search(nums,target);
}