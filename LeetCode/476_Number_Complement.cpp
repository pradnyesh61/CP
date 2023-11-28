// 28 November 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findComplement(int num)
    {

        string s = "";

        while (num)
        {
            int rem = num % 2;
            s += rem + '0';
            num /= 2;
        }

        reverse(s.begin(), s.end());
        cout << s << endl;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
            }
            else
            {
                s[i] = '0';
            }
        }

        int i = 0;

        for (; i < s.size(); i++)
        {
            cout << s[i] << " -- ";
            if (s[i] != '0')
            {
                i--;
                break;
            }
        }

        int n = 0;
        int j = 0;

        cout << s.size() - 1 << " > " << i << endl;

        for (int k = s.size() - 1; k > i; k--)
        {
            cout << "k =" << k << "  s[k]=" << s[k] << "  j= " << j;
            int p = pow(2, j);
            cout << " p=" << p;
            if (s[k] != '0')
            {
                n = n + (1 * p);
            }
            else
            {
                n = n + (0 * p);
            }

            cout << " n =" << n << endl;
            j++;
        }

        return n;
    }
};