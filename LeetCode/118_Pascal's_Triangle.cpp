// 8 September 2023

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int n)
    {

        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            if (i == 0)
            {
                v.push_back(1);
            }
            else if (i == 1)
            {
                v.push_back(1);
                v.push_back(1);
            }
            else
            {
                for (int j = 0; j <= i; j++)
                {
                    if (j == 0 || j == i)
                    {
                        v.push_back(1);
                        continue;
                    }

                    v.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
                }
            }

            ans.push_back(v);
        }

        return ans;
    }
};