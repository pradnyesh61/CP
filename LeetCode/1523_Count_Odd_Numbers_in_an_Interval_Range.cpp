
// 13 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*  int countOdds(int low, int high) {
          int count  = 0;
          if(low %2 == 0)
              low += 1;

          for(int i = low ; i <= high ; i += 2)
              ++count;

          return count;
      }

      */

    int countOdds(int low, int high)
    {
        int res = (high - low) / 2;
        if (low % 2 != 0 || high % 2 != 0)
            res++;
        return res;
    }
};