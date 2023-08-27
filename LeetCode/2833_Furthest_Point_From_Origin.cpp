// 27 August 2023

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {

        int mov = 0;

        char c = moves[0];

        int left = 0;
        int right = 0;
        int under = 0;

        for (auto it : moves)
        {
            if (it == 'L')
            {
                left++;
            }
            else if (it == 'R')
            {
                right++;
            }
            else
            {
                under++;
            }
        }

        if (left > right)
        {
            c = 'L';
        }
        else
        {
            c = 'R';
        }

        // cout<<left<<" - "<<right<<" + "<<under<<" = "<<(abs(left-right)+under);

        return abs(left - right) + under;
        /*   for(int  i = 0; i < moves.size();i++)
           {
               if(moves[i] == 'L')
               {
                   mov--;
               }
               else if(moves[i] == 'R')
               {
                   mov++;
               }
               else if(moves[i] == '_' && c == 'L'){
                   mov--;
               }
               else if(moves[i] == '_' && c == 'R'){
                   mov++;
               }
           }

           return abs(mov);

           */
    }
};