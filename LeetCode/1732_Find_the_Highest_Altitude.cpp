// 19 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /* int largestAltitude(vector<int>& gain) {

         gain.insert(gain.begin(),0);

         for(int i = 1 ; i < gain.size();i++)
         {
             gain[i] = gain[i-1]+gain[i];

             cout<<gain[i]<<endl;
         }

         return *max_element(gain.begin(),gain.end());

     }
     */
    int largestAltitude(vector<int> &gain)
    {

        int max = 0;
        int sum = 0;

        for (int i = 0; i < gain.size(); i++)
        {
            sum += gain[i];

            if (max < sum)
            {
                max = sum;
            }
        }

        return max;
    }
};