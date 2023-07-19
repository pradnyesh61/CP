// 19 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        
    int I = 1;
    int V = 5;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char T = s[i];

        if (T == 'I' && s[i + 1] == 'V')
        {
            count = count + 5 - 1;
            i++;
        }
        else if (T == 'I' && s[i + 1] == 'X')
        {
            count = count + 10 - 1;
            i++;
        }
        else if (T == 'X' && s[i + 1] == 'L')
        {
            count = count + 50 - 10;
            i++;
        }
        else if (T == 'X' && s[i + 1] == 'C')
        {
            count = count + 100 - 10;
            i++;
        }
        else if (T == 'C' && s[i + 1] == 'D')
        {
            count = count + 500 - 100;
            i++;
        }
        else if (T == 'C' && s[i + 1] == 'M')
        {
            count = count + 1000 - 100;
            i++;
        }
        else
        {

            switch (T)
            {
            case 'I':
                count = count + I;
                break;

            case 'V':
                count = count + V;
                break;

            case 'X':
                count = count + X;
                break;

            case 'L':
                count = count + L;
                break;

            case 'C':
                count = count + C;
                break;

            case 'D':
                count = count + D;
                break;

            case 'M':
                count = count + M;
                break;

            default:
                break;
            }
        }
    }

    return count;
        
    }
};