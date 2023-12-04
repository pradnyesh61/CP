// 4 December 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string largestGoodInteger(string num) {
        
        string maxi = "";
        char a = num[0];
        char largest = '0';
        char b = num[1];

        for(int i = 2; i < num.size(); i++)
        {
            char c = num[i];
            cout<<largest<<" = "<<c<<endl;

            if(a == b && b == c && largest <= c)
            {
                maxi = "";
                largest = c;
                 maxi += largest;
                maxi += largest;
                maxi += largest;
                cout<<maxi<<endl;
            }

            a = b;
            b = c;
        }

        cout<<"out"<<largest<<endl;

       
        return maxi;
    }
};