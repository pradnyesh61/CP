// 6 October 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        map<int,int> m;

        for(auto it : nums)
        {
            m[it]++;
        }

        int count = 0;

        for(auto it : m)
        {
            cout<<it.first<<" = "<<it.second<<endl;
        }

        for(auto it : m)
        {
            if(it.second == 1)
            {
                return -1;
            }
            if(it.second % 3 == 0)
            {
                count += (it.second/3);
            }
            else {
                count += (it.second/3+1);
            }
        }

        return count;

    }
};