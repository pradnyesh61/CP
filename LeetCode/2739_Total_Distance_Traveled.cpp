// 18 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distanceTraveled(int mainTank, int additionalTank)
    {

        int km = 0;

        while (mainTank)
        {
            if (mainTank >= 5)
            {
                km += (10 * 5);
                mainTank -= 5;
                if (additionalTank)
                {
                    additionalTank--;
                    mainTank++;
                }
            }
            else
            {
                km += (mainTank * 10);
                break;
            }

            // cout<<additionalTank<<" = "<<mainTank<<" = "<<km<<endl;
        }

        return km;
    }
};