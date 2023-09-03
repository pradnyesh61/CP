// 3 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSymmetricIntegers(int low, int high)
    {

        int count = 0;

        for (int i = low; i <= high; i++)
        {
            string s = to_string(i);
            int n = s.size();
            if (n % 2 == 0)
            {
                int t = 0;

                for (int j = 0; j < n / 2; j++)
                {
                    t += (s[j]) - (s[n - j - 1]);
                }

                if (t == 0)
                {
                    count++;
                }
            }
        }

        return count;
    }
};