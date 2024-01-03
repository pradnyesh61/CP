// 3 January 2024

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;

        for(auto it:bank)
        {
            int count = 0;
            for(auto i : it)
            {

                if(i == '1')
                {
                    count++;
                }
            }

            if(count)
            {
                v.push_back(count);
            }
        }

        if(v.size()==0)
        {
            return 0;
        }

        int  count = 0;


        for(int i = 0; i < v.size()-1; i++)
        {
            count += (v[i] * v[i+1]);
        }

        return count;
    }
};