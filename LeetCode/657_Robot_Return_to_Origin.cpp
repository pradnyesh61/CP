// 4 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeCircle(string moves)
    {

        pair<int, int> p(0, 0);

        for (int i = 0; i < moves.size(); i++)
        {
            if (moves[i] == 'U')
            {
                p.first--;
            }
            else if (moves[i] == 'D')
            {
                p.first++;
            }
            else if (moves[i] == 'L')
            {
                p.second--;
            }
            else if (moves[i] == 'R')
            {
                p.second++;
            }
        }

        if (p.first == 0 && p.second == 0)
            return true;

        return false;
    }
};