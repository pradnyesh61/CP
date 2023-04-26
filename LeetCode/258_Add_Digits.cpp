// 26 April 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
 
    //  int addDigits(int n) { 
         
    //      if(n == 0 )
    //          return 0;
         
    //      if(n%9 == 0)
    //          return 9;
         
    //      return n%9;
      
    // }
    
     /*  
    int addDigits(int n) { 
      
        int sum = 0;
       
        while(n)
        {
            int rem = n%10;
            sum  += rem;
            n /=10;
        }
        
        if(sum >= 0 && sum <= 9)
            {
                return sum;
            }
        
        return addDigits(sum);
    }
    
    */

    int addDigits(int n) { 
         
         if(n >= 0 && n <= 9)
         {
             return n;
         }
         if(n%9 == 0)
         {
             return 9;
         }
        return n%9;
      
    }
};