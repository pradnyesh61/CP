// 7 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFlips1(int a, int b, int c)
    {
        bitset<32> x(a);
        bitset<32> y(b);
        bitset<32> z(c);

        cout << x << endl;
        cout << y << endl;
        cout << z << endl;

        int count = 0;
        for (int i = 0; i < 32; i++)
        {
            if (z[i] == 1)
            {
                if (x[i] == 0 && y[i] == 0)
                    count++;
            }
            else
            {
                if (x[i] == 1)
                    count++;
                if (y[i] == 1)
                    count++;
            }
        }
        return count;
    }

    string bits(int n)
    {
        string s = "";

        while (n)
        {
            cout << n << " ";
            int k = n % 2;
            s += to_string(k);
            n = n / 2;
        }
        cout << endl;

        return s;
    }

    int minFlips(int aa, int bb, int cc)
    {

        string a = bits(aa);
        string b = bits(bb);
        string c = bits(cc);

        // reverse(a.begin(),a.end());
        // reverse(b.begin(),b.end());
        // reverse(c.begin(),c.end());

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;

        int count = 0;
        int i = 0;
        for (i = 0; i < c.size(); i++)
        {
            // cout<<"c = "<<c[i]<<endl;
            char x = '0';
            if (i < a.size())
                x = a[i];

            char y = '0';
            if (i < b.size())
                y = b[i];

            if (c[i] == '1')
            {

                if (x == '0' && y == '0')
                {
                    //       cout<<"hi-2"<<endl;
                    count++;
                }
            }
            else if (c[i] == '0')
            {
                if (x != '0')
                {
                    //     cout<<"hi-3"<<endl;
                    count++;
                }

                if (y != '0')
                {
                    //   cout<<"hi-4"<<endl;
                    count++;
                }
            }
            //  cout<<endl;
        }

        int k = i;
        int q = i;

        while (k < a.size())
        {
            if (a[k] == '1')
                count++;
            k++;
        }

        while (q < b.size())
        {
            if (b[q] == '1')
                count++;
            q++;
        }

        return count;
    }
};