// 11 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long coloredCells(int n)
    {

        if (n == 1)
        {
            return 1;
        }

        long long temp = 1;
        long long sum = 0;

        for (int i = 1; i < n; i++)
        {
            long long k = 4 * i;
            sum = k + temp;

            // cout<<"k="<<k<<" = "<<"temp="<<temp<<" = "<<"sum="<<sum;
            temp = sum;
            // cout<<"  =  aftertemp="<<temp<<endl;
        }

        return sum;
    }
};