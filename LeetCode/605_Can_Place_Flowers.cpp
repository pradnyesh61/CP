// 20 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if(n==0)
            return true;


        for(int i = 0 ; i < flowerbed.size() ; i++)
        {
            if(flowerbed[i] == 0){
                bool left = (i == 0) || (flowerbed[i-1] == 0);
                bool right = (i == flowerbed.size()-1) || (flowerbed[i+1] == 0);

                if(left && right){
                    n--;
                    flowerbed[i] = 1;

                    if(n==0)
                    return true;
                }

            }
        }    

        
           return !n;
    
    }
};