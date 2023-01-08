
//Weekly Contest 327
//8 jan 2023

#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int negative = 0 , positive =0 ;
    
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n ; i++)
        {
            if(nums[i]<0)
                negative++;
            
            if(nums[i] > 0)
                positive++;
        }
        
        return max(negative,positive);
        
    }
};

int main()
{
    Solution s;
    vector<int> v ={-2,-1,-1,1,2,3};
    cout<<s.maximumCount(v);
}