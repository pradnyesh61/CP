//7 jan 2023

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = gas.size();
        int sum_gas = 0, sum_cost = 0;
        int position = 0;

        for(int i = 0 ; i < n ; i++)
        {
            sum_gas  += gas[i]-cost[i];
            sum_cost += gas[i]-cost[i];

            if( sum_gas < 0)
            {
                position = i+1;
                sum_gas =0;
            }
        }

        if(sum_cost >= 0)
            return position;

        return -1;

    }
};

int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> v1 = {3,4,5,1,2};

Solution s;
    cout<<s.canCompleteCircuit(v,v1);
}