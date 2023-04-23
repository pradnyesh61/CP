// 23 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime)
    {
        // while(delayedTime--)
        // {
        //     if(arrivalTime+1 >= 24)
        //     {
        //         arrivalTime = 0;
        //     }
        //     else{
        //         arrivalTime += 1;
        //     }
        // }

        // return arrivalTime;

        return (arrivalTime + delayedTime) % 24;
    }
};