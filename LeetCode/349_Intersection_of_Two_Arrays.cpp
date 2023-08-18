// 19 August 2023

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
         set<int> s2(nums2.begin(),nums2.end());
        
       

        vector<int> ans;

        
        for(auto it = s.begin() ; it != s.end(); it++)
        {
            if(s2.find(*it) != s2.end()){
                ans.push_back(*it);
            }
        }

/*         vector<int> v = vector(s.begin(),s.end());
        vector<int> v2 = vector(s2.begin(),s2.end());


        for(auto it : v)
        {
            if(find(v2.begin(),v2.end(),it) != v2.end())
            {
                ans.push_back(it);
            }
        }

*/
        return ans;


    }
};