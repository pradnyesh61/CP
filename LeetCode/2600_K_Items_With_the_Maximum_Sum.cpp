// 25 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
    {

        int maxi = 0;

        while (k)
        {

            while (numOnes-- && k)
            {
                k--;
                maxi += 1;
            }

            while (numZeros && k)
            {
                k--;
                maxi += 0;
                numZeros--;
            }

            while (numNegOnes && k)
            {
                k--;
                numNegOnes--;
                maxi += (-1);
            }
        }

        return maxi;
    }
};