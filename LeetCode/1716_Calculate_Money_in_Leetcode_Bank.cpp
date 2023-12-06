// 6 December 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int totalMoney(int n) {
        
        int day = 0;
        long count = 0;
        long monday = 1;
        int mon = 1;

        while(n--)
        {
            if(day == 7)
            {
                mon++;
                monday  = mon;
                day = 0;
                
            }
            count += monday;
             cout<<monday<<endl;   
            monday++;
            day++;
        
        }

        return count;
    }
};