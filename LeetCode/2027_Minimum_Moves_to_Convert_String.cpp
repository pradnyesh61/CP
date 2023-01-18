// 18 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
        int count = 0;
        int move = 0;

int i =0;
       while(i < s.length())
        {
            int j;
            if(s[i] == 'O')
            {
                i++;
                continue;
            }
            for( j = i ; j < i+3 ; j++)
            {
                if(s[i] == 'X')
                {
                    count++;
                }
            }

            i = j;

            if(count>0)
            {
                move++;
            }

        }

        return move;
    }
};