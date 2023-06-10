// 10 June 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    void check(vector<int> &v , int n)
    {
        cout<<n<<endl;
        while(n)
        {
            int k  = n%10;
            v[k]++;
            n /= 10;
        }
    }
     bool isFascinating(int n) {

        
       string s = to_string(n)+to_string(n*2)+to_string(n*3);
        
       int j = 1;
       sort(s.begin(),s.end());

        for(int i = 0; i < s.size() ; i++)
        {
            if(s[i]-'0' != j)
            {
                return false;
            }
            j++;
        }

        return true;

    }

    bool isFascinating1(int n) {
        
        vector<int> v(10,0);

        int k = n*2;
        int m = n*3;

        check(v,n);
        check(v,n*2);
        check(v,n*3);

        for(int i = 1; i <= 9 ; i++)
        {
            if(v[i] != 1)
            {
                return false;
            }
        }

        return true;

    }
};