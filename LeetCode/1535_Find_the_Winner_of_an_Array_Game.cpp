// 5 November 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int getWinner(vector<int>& arr, int k) {
        
    //     int count = 0;
    //     int maxi = 0;

    //     for(int i = 1; i < arr.size() ; i++)
    //     {
    //         arr.push_back(min(arr[i-1],arr[i]));

    //         arr[i] = max(arr[i-1],arr[i]);
        
    //         if(maxi == arr[i])
    //         {
    //             count++;
    //         }
    //         else{
    //             maxi = arr[i];
    //             count = 1;
    //         }

    //         if(count == k)
    //         {
    //             return maxi;
    //         }
    //     }

    //     return maxi;
    // }

    // int getWinner(vector<int>& arr, int k) {
        
    //     int count = 0;
    //     int maxi = 0;
        
    //     while(true)
    //     {
    //         arr.push_back(min(arr[0],arr[1]));

    //         arr[1] = max(arr[0],arr[1]);

    //         arr.erase(arr.begin()+0);
        
    //         if(maxi == arr[0])
    //         {
    //             count++;
    //         }
    //         else{
    //             maxi = arr[0];
    //             count = 1;
    //         }

    //         if(count == k)
    //         {
    //             return maxi;
    //         }
            
    //     }

    //     return maxi;
    // }

     int getWinner(vector<int>& arr, int k) {
        
        if(arr.size() < k)
        {
            return *max_element(arr.begin(),arr.end());
        }

        int count = 0;
        int maxi = 0;

        int m = arr[0];

       for(int i = 1; i< arr.size() ; i++)
       {
            m = max(m,arr[i]);

           if(m == maxi)
           {
               count++;
           }
           else{
               maxi = m;
               count = 1;
           }

           if(count == k)
           {
               return maxi;
           }

       } 

        return maxi;
    }
};