// 23 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        
        int maxi = 0;
        map<int,int> m;

        while(n)
        {
            int a = n;
            n--;
            int sum = 0;
            while(a)
            {
                int rem = a%10;
                sum += rem;
                a /= 10;
            }

            m[sum]++; 
            
        }

                
int i = 0;

         for(auto it: m)
        {
           if(i < it.second){
               i = it.second;
           }

        }

        for(auto it: m)
        {
           
            if(i == 0)
            {
                i = it.second;
            }

            if(i == it.second)
            {
                maxi++;
            }

        }

        return maxi;
    }
};