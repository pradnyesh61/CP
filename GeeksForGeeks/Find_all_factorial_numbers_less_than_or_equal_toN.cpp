#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    
  
    vector<long long> factorialNumbers(long long N)
    {
         long long product = 1;
        vector<long long> v1;
        long long i = 1;
        
       while(product <= N)
       {
        
        product = product*i++;   
           
           v1.push_back(product);
       }
       v1.pop_back();
        return v1;
    }
};