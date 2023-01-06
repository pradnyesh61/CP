// It is a sweltering summer day, and a boy wants to buy some ice cream bars.
// At the store, there are n ice cream bars. You are given an array costs of length n, where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins coins to spend, and he wants to buy as many ice cream bars as possible. 
// Return the maximum number of ice cream bars the boy can buy with coins coins.
// Note: The boy can buy the ice cream bars in any order.

//6 jan 2023

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int count = 0 ;
         
        sort(costs.begin(),costs.end());

        for(auto it : costs)
        {
            if(coins >= it)
            {
                count++;
                coins -= it;
            }
            else
                break;
        }

        return count;
    }
};

int main()
{
    vector<int> v = {1,3,2,4,1};

    Solution s;
    cout<<s.maxIceCream(v,7);
}