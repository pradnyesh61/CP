// 14 May 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    
     vector<int> circularGameLosers(int n, int k) {
        
        vector<int> vis(n,0);

        int i = 0;
        int j = 1;

        while( true )
        {
            if(vis[i] == 1)
            {
                break;
            }
            vis[i] = 1;
            
            int temp = i + (j * k);
            j++;

            i = temp % n; // circular queue logic
           

        }
        vector<int> ans;

        for(int q = 0 ; q < vis.size() ; q++)
        {
            if(vis[q] == 0)
            {
                ans.push_back(q+1);
            }
        }

        return ans;
    }
};