// 4 Feb 2023
// Biweekly Contest 97

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*
    int maxCount(vector<int>& banned, int n, int maxSum) {

          int sum = 0;
          int count = 0;
          int j = 0;
          sort(banned.begin(),banned.end());

          for(int i = 1 ; i <= n ; i++)
          {
              if(sum+i >= maxSum)
              {
                  break;
              }
                  if(banned[j] == i && banned.size() < j)
                  {
                      while(i == banned[j])
                      j++;
                  }
              else
                  {

                      count++;
                      sum += i;
                  }

          }

      return count;
      }

      */

    int maxCount(vector<int> &banned, int n, int maxSum)
    {

        int sum = 0;
        int count = 0;

        map<int, int> m;

        for (auto it : banned)
        {
            m[it]++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (m.find(i) == m.end() && sum + i <= maxSum)
            {
                count++;
                sum += i;
            }
        }

        return count;
    }
};