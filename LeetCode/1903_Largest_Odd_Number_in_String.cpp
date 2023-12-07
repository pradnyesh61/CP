// 7 December 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // string largestOddNumber(string num) {

    //     long long n = stold(num);

    //    long long largest = INT_MIN;

    //     while(n)
    //     {
    //         if(n%2 != 0)
    //         {
    //             if(largest < n){
    //                 largest = n;
    //                 break;
    //             }
    //         }
    //         else{

    //             int rem = n%10;
    //             if(rem%2 != 0 && largest < rem)
    //             {
    //                 largest = rem;
    //             }
    //         }

    //         n = n/10;

    //     }

    //     if(largest == INT_MIN)
    //     {
    //         return "";
    //     }

    //     num ="";
    //     num  = to_string(largest);

    //     return num;

    // }

    string largestOddNumber(string num)
    {

        int largest = INT_MIN;

        for (int i = num.size() - 1; i >= 0; i--)
        {
            int k = num[i] - '0';

            if (k % 2 != 0 && largest < k)
            {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
};