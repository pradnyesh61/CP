// 2 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    // {
    //     vector<int> sucPair(spells.size(),0);
    //     sort(potions.begin(),potions.end());
      
    //     for(long long i = 0; i < spells.size(); i++)
    //     {
    //         long long count = 0;
    //         for(long long j = 0; j < potions.size(); j++)
    //         {
    //             long long ans =  (long long)spells[i]*potions[j];
    //             if(ans >= success)
    //             {
    //                 count = (potions.size()) - j; 
    //                 break;       
    //             }
    //         }
    //         sucPair[i] = count;
    //     } 

    //     return sucPair;   
    // }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {

        vector<pair<int,int>> v;

        for(int i = 0; i < spells.size(); i++)
        {
            v.push_back({spells[i],i});
        }

        sort(v.begin(),v.end());

        vector<int> sucPair(spells.size(),0);
       
        sort(potions.begin(),potions.end());
        
        int i  = potions.size()-1;
        int count = 0;
       
       for(auto [spells,index] : v)
       {
          
           while(i >= 0 && (long long)spells*potions[i] >= success)
           {
               count++;
               i--;
             
           }

           sucPair[index] = count;
       }

        return sucPair;   
    }
};