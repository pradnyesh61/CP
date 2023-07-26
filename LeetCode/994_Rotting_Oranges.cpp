// 26 July 2023

#include <bits/stdc++.h>
using namespace std;
class Solution

{
public:
    int orangesRotting(vector<vector<int>> &v)
    {
        int n, m;
        n = v.size();
        m = v[0].size();

        int x = -1, y = -1;
        int zz = 0;
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == 2)
                {
                    x = i;
                    y = j;
                    q.push({i, j});
                }

                if (v[i][j] != 0)
                {
                    zz = 1;
                }
            }
        }

        if (zz == 0)
        {
            return 0;
        }

        if (x == -1 && y == -1)
        {
            return -1;
        }

        q.push({-1, -1});

        int count = 0;
        int flag = 0;

        while (!q.empty())
        {

            pair<int, int> p = q.front();
            pair<int, int> pp;
            q.pop();
            flag = 0;

            while ((p.first != -1) && (p.second != -1))
            {
                // cout<<p.first<<" "<<p.second<<endl;

                if ((p.first - 1) >= 0)
                {
                    if ((v[p.first - 1][p.second]) == 1)
                    {
                        flag = 1;
                        v[p.first - 1][p.second] = 2;
                        q.push({p.first - 1, p.second});
                    }
                }

                if (p.first + 1 < n)
                {
                    if (v[p.first + 1][p.second] == 1)
                    {
                        flag = 1;
                        v[p.first + 1][p.second] = 2;
                        q.push({p.first + 1, p.second});
                    }
                }

                if (p.second - 1 >= 0)
                {
                    if (v[p.first][p.second - 1] == 1)
                    {
                        flag = 1;
                        v[p.first][p.second - 1] = 2;
                        q.push({p.first, p.second - 1});
                    }
                }

                if (p.second + 1 < m)
                {
                    if (v[p.first][p.second + 1] == 1)
                    {
                        flag = 1;
                        v[p.first][p.second + 1] = 2;
                        q.push({p.first, p.second + 1});
                    }
                }

                pp = q.front();
                // cout<<pp.first<<" "<<pp.second<<endl<<endl<<endl;

                if (pp.first == -1 && pp.second == -1)
                {
                    q.push({-1, -1});
                    break;
                }

                p.first = pp.first;
                p.second = pp.second;
                q.pop();
            }

            if (flag)
            {
                count++;
            }
        }

        int f = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == 1)
                {
                    f = 1;
                    break;
                }

                // cout<<v[i][j]<<" ";
            }
            cout << endl;

            if (f == 1)
            {
                break;
            }
        }

        if (f)
        {
            int ab = -1;
            return ab;
        }
        else
        {
            return (count);
        }
    }
};