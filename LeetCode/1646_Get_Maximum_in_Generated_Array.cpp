// 8 April 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int getMaximumGenerated(int n) {
        
        vector<int> v(n+2);

        v[0] = 0;
        v[1] = 1;

        for(int i = 1 ; i <= n; i++)
        {
            int temp = 2*i;

            if(temp >= 2 && temp <= n){
                v[temp] = v[i];
                v[temp+1] = v[i] + v[i+1];          
            }
        }

        //array is initialize as n+2 that is why v.end()-1
        return *max_element(v.begin(),v.end()-1);
    }
};