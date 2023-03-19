// 19 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> evenOddBit(int n) {
        
        vector<int> v;
        
        while(n)
        {
            int rem = n%2;
            v.push_back(rem);
            n=n/2;
        }
        
        int odd = 0;
        int even = 0;
       for(int i = v.size()-1 ; i >=0 ;i--)
       {
          
           if((i%2 == 0) && v[i]==1)
           {
              
               even++;
           }
           else if((i%2 != 0) && v[i]==1){
              
               odd++;
           }
       }
        
        cout<<even<<" == "<<odd<<endl;
        vector<int> a;
        a.push_back(even);
        a.push_back(odd);
        return a;
    }
};