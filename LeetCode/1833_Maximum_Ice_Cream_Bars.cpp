//5 jan 2023

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