// 1 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        
        int minS = INT_MAX;
        int maxS = INT_MIN;

        int sum = 0;

        int l = salary.size();

        for(int i = 0; i  < l; i++)
        {
            if(salary[i] < minS)
            {
                minS = salary[i];
            }
            
            if(salary[i] > maxS)
            {
                maxS = salary[i];
            }

            sum += salary[i];
        }


        sum -= (minS+maxS);

        return (double) sum/(l-2);
    }
};