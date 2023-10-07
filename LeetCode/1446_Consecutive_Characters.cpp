// 7 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        
      int maxi = 1;

      int count = 1;

      for(int i = 1; i < s.length() ;i++)
      {
          if(s[i] == s[i-1])
          {
              count++;
          }
          else{
              if(maxi < count)
              {
                  maxi = count;
                 
              }
               count = 1;
          }
           cout<<count<<endl;
      }

      if(count > maxi)
      {
          return count;
      }

        return maxi;

    }

};