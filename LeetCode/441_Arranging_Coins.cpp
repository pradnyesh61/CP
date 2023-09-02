// 2 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {

        int count = 0;
        

        int i = 1;
        long coin = 0;
        while(n)
        {
            coin = i + coin;
            if(coin <= n)
            {
                count++;
                i++;
            }
            else{
                break;
            }


        }
        
        return count;
    }
};