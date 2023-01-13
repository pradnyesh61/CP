
// 13 jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   /* int maxCoins(vector<int>& piles) {
        
        int sum = 0 ; 
        
        sort(piles.begin(),piles.end());

        int n = piles.size();
        int j = n;

        n = n/3;

        for(int i = 0 ; i< n ;i++)
        {
            j = j-2;
            sum += piles[j];
        }

        return sum;

    }

    */

    int maxCoins(vector<int>& piles) {
        
        int sum = 0 ; 
        
        sort(piles.begin(),piles.end());
        int n = piles.size();

        for(int  i = n/3 ; i < n; i += 2)
        {
            sum += piles[i];
        }

        return sum;

    }
};