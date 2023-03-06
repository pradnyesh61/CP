// 6 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // int findKthPositive(vector<int>& arr, int k) {

    //     int i = 1, j =0;

    //     while(k)
    //     {
    //         if(j<arr.size() && arr[j] == i)
    //         {
    //             i++;
    //             j++;
    //         }
    //         else{
    //             i++;
    //             k--;
    //         }
    //     }

    //     return i-1;
    // }

    int findKthPositive(vector<int> &arr, int k)
    {
        for (auto it : arr)
        {
            if (it <= k)
            {
                k++;
            }
        }
        return k;
    }
};