// 25 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   /*
   int maxProfit(vector<int>& prices) {
        
        int max = 0;
        
        for(int i = 0 ; i < prices.size()  ; i++)
        {
            
            for(int j = i+1 ; j < prices.size() ; j++)
            {   
                
            if(prices[i] > prices[j])
            {
                break;
            }
                if(prices[i] < prices[j] && prices[j]-prices[i] > max)
                {
                    max = prices[j]-prices[i];
                }
                
            }
        }
        
        return max;
        
    }
    
    */
    
    int maxProfit(vector<int>& v) {
        
      int buying_price = v[0];
       int profit = 0;
        
        for(int  i = 1  ; i < v.size() ; i++)
        {
            if(buying_price > v[i])
            {
                buying_price = v[i];
            }
            else{
                profit = max(profit,v[i] - buying_price);
            }
        }
        
        
        return profit;
    }

};