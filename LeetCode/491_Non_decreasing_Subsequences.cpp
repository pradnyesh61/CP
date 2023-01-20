// First method will work but gives TLE 
// In second method TLE is not coming
// we can use set<vector<int>> for distinct sequence
// and while returning we need to return 2D vector
// so for that we can just convert / TypeCast the set<vector<int> 
// check the return type

// 20 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*    vector<vector<int>> v2;
        void nds( int i ,vector<int>& nums,int n,vector<int> v)
        {
            if(i >= n )
            {
                if(v.size()>=2){
               for(int i = 0; i < v.size()-1; i++)
               {
                   if(v[i]>v[i+1])
                   {
                       return ;
                   }
               }
                if(find(v2.begin(),v2.end(),v) != v2.end())
                {
                    return ;
                }
                v2.push_back(v);
                }
                return;
            }

            v.push_back(nums[i]);
            nds(i+1,nums,n,v);
            v.pop_back();
            nds(i+1,nums,n,v);

        }
    */
    set<vector<int>> v2;
    void nds(int i, vector<int> &nums, int n, vector<int> v)
    {
        if (i >= n)
        {
            if (v.size() >= 2)
            {

                v2.insert(v);
            }
            return;
        }

        if (i < n)
        {
            if (v.size() > 0)
            {
                if (v[v.size() - 1] <= nums[i])
                {
                    v.push_back(nums[i]);
                    nds(i + 1, nums, n, v);
                    v.pop_back();
                }
            }
            else
            {
                v.push_back(nums[i]);
                nds(i + 1, nums, n, v);
                v.pop_back();
            }
        }

        nds(i + 1, nums, n, v);
    }

    vector<vector<int>> findSubsequences(vector<int> &nums)
    {

        vector<int> v1;

        nds(0, nums, nums.size(), v1);

        return vector(v2.begin(), v2.end());
    }
};