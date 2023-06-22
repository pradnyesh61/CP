// 22 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:


    int  profit(int i,vector<int>& prices,int fee, int sum, int buy,int pro)
    {

        if(i >= prices.size())
        {
            return pro;
        }

        int take = INT_MIN;

        if(buy == -1 && i != prices.size()-1){
            take = profit(i+1,prices,fee,sum+fee,prices[i],pro);
        }
        else if(buy != -1 && prices[i] > buy)
        {
                take = profit(i+1,prices,fee,sum+fee,-1,pro+(prices[i]-buy)-fee);
        }
        
        int notTake = INT_MIN;

        notTake = profit(i+1,prices,fee,sum,buy,pro); 

        return max(take,notTake);


    }

     int  memoization(int i,vector<int>& prices,int fee ,int buy,vector<vector<int>> dp)
    {
        cout<<prices[i]<<endl;
        if(i >= prices.size())
        {
            return 0;
        }

        if(dp[i][buy] != -1)
        {
            return dp[i][buy];
        }

        int profit = 0;

        if(buy)
        {
            profit = max(-prices[i]+memoization(i+1,prices,fee,0,dp) , 
                                    memoization(i+1,prices,fee,1,dp));
        }
        else{
            profit = max(prices[i]-fee + memoization(i+1,prices,fee,1,dp),
                                        memoization(i+1,prices,fee,0,dp));
        }

        return dp[i][buy] = profit;

    }

    int tabulation(vector<int>& prices, int fee)
    {
        vector<vector<int>> dp(prices.size()+1,vector<int>(2,0));

        for(int i = prices.size()-1; i >= 0 ; i--)
        {
            for(int buy = 0; buy <= 1; buy ++)
            {                
                int profit = 0;

                 if(buy)
                {
                    profit = max(-prices[i]+dp[i+1][0] , 
                                            dp[i+1][1] );
                }
                else{
                    profit = max(prices[i]-fee + dp[i+1][1],
                                                dp[i+1][0]);
                }

                dp[i][buy] = profit;
            }
        }

        return dp[0][1];

    }

    int spaceOptimization(vector<int>& prices, int fee)
    {
        vector<int> ahead(2,0),cur(2,0);

        for(int i = prices.size()-1; i >= 0 ; i--)
        {
            for(int buy = 0; buy <= 1; buy ++)
            {                
                int profit = 0;

                 if(buy)
                {
                    profit = max(-prices[i]+ahead[0] , 
                                            ahead[1] );
                }
                else{
                    profit = max(prices[i]-fee + ahead[1],
                                                ahead[0]);
                }

                cur[buy] = profit;
            }

            ahead = cur;
        }

        return ahead[1];
    }

    int maxProfit(vector<int>& prices, int fee) {
        return spaceOptimization(prices,fee);

        vector<vector<int>> dp(prices.size()+1,vector<int> (prices.size()+1,-1));
        
        return tabulation(prices,fee);
        return memoization(0,prices,fee,1,dp);
     //   return profit(0,prices,fee,0,-1,0);
    }
};