// 3 May 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
    //     vector<vector<int>> ans(2);

    //     for(int i = 0 ;i < nums1.size() ; i++)
    //     {
    //         int k = nums1[i];

    //         if(find(nums2.begin(),nums2.end(),k) == nums2.end())
    //         {
    //             if(find(ans[0].begin(),ans[0].end(),k) == ans[0].end())
    //             ans[0].push_back(k);
    //         }
            
           
    //     }

        
    //     for(int i = 0 ;i < nums2.size() ; i++)
    //     {
    //         int k = nums2[i];

    //         if(find(nums1.begin(),nums1.end(),k) == nums1.end())
    //         {
                
    //             if(find(ans[1].begin(),ans[1].end(),k) == ans[1].end())
    //             ans[1].push_back(k);
    //         }
           
    //     }

    //     return ans;
    // }

    vector<int> getelements(vector<int> &nums1,vector<int> &nums2)
    {
        unordered_set<int> s;
        unordered_set<int> s2(nums2.begin(),nums2.end());

        for(int i = 0 ;i < nums1.size() ; i++)
        {
            if(s2.find(nums1[i]) == s2.end())
            {
                s.insert(nums1[i]);
            }
        }

        return vector<int> (s.begin(),s.end());
       
    }


     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> ans(2);

        return {getelements(nums1,nums2), getelements (nums2,nums1)};
        
    }
};