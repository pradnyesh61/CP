// 27 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        sort(prices.begin(),prices.end());

        if(prices[0]+prices[1] <= money)
        {
            return money - (prices[0]+prices[1]);
        }

        return money;
    }
};