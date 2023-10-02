// 2 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool winnerOfGame(string colors)
    {

        int count = 0;

        int n = colors.size();
        int a = 0;
        int b = 0;

        for (int i = 1; i < colors.size(); i++)
        {
            if (colors[i - 1] == colors[i] && colors[i + 1] == colors[i])
            {
                if (colors[i] == 'A')
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }

        return a > b;
    }

    /*
      bool winnerOfGame1(string colors) {

            bool alice = true;
            while(true)
            {
               if(alice)
                {
                    for(int j = 1 ;j < colors.size()-1; j++)
                    {
                        if(colors[j-1] == 'A' && colors[j] == 'A' && colors[j+1] == 'A')
                        {
                            alice = false;
                            colors.erase(colors.begin()+j);
                            break;
                        }
                    }
                    if(alice)
                    {
                        return false;
                    }
                }
                else
                {
                     for(int j = 1 ;j < colors.size()-1; j++)
                    {
                        if(colors[j-1] == 'B' && colors[j] == 'B' && colors[j+1] == 'B')
                        {
                            alice = true;

                            colors.erase(colors.begin()+j);
                            break;
                        }
                    }

                    if(alice == false)
                    {
                        return true;
                    }
                }
            }
        }
        */
};