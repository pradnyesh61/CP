// 24 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   

    double myp(double x,int n)
    {
         if(n == 1)
        {
            return x;
        }
      
       return myPow(x,n-1) * x ;

    }

    double myPow(double x, int n) {
        
        return pow(x,n);
       if(n == 1)
       {
           return x;
       }

       if(n <0)
       {
           n = n*-1;
           x= 1/x;
       }

       if(n%2 ==0)
        return myPow(x*x,n/2);

        return x*myPow(x*x,n/2);

       
    }
};