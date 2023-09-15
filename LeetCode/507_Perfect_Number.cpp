// 15 September 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        vector<int> v;

        int sum = 0;

        for(int i = 1 ; i < num; i++)
        {
            if(num%i == 0)
            {
                sum += i;
            }
        }

        if(sum == num)
        {
            return true;
        }

        return false;
    }
};