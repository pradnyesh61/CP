// 3 April 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // int numRescueBoats(vector<int>& people, int limit) {
        
    //     long i = 0;
    //     long j = people.size()-1;

    //     sort(people.begin(),people.end());
      
    //     int shipCount = 0;

    //     while(i <= j)
    //     {
    //         int l = limit;
    //         if((i <= j && l - people[j]) >= 0 && people[j] <= l )
    //         {
    //             l = l - people[j];
    //              j = j - 1;
    //         }
            
    //         if(i <= j && (l - people[i]) >= 0 && people[i] <= l)
    //         {
    //             l -= people[i];
    //             i++;
            
    //         }

    //         shipCount++;
         
    //     }

      
    //     return shipCount;
    // }

    int numRescueBoats(vector<int>& people, int limit) {
        
        // atleast one perons will fit into boat
        // so heavier person we assume he is taken into boat /sitted
        // we just need to check lighter person can fit into same boat or not with heaviest
        long i = 0;
        long j = people.size()-1;

        sort(people.begin(),people.end());
      
        int shipCount = 0;

        while(i <= j)
        {
            if(people[i] + people[j] <= limit )
            {
                i++;
            }
           j--;

            shipCount++;
         
        }

      
        return shipCount;
    }
};