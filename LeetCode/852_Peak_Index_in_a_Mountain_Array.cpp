// 25 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int i =0;
        int n = arr.size();

        int j = n-1;

        int maxi = INT_MIN;
        int ind = 0;

        while(i <= j)
        {
            if(arr[i] > maxi)
            {
                maxi = arr[i];
                ind = i;
            }
            
            if(arr[j] > maxi)
            {
                ind = j;
                maxi = arr[j];
            }
            i++;
            j--;
        }

        return ind;
    }
};