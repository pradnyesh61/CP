// 12 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        
        int i =1;
        int flag = 0;
        while(time--){
            if(i == n)
            {
                flag = 1;
            }
            else if(i == 1)
            {
                flag = 0;
            }
            if(flag == 0)
            {
                i+= 1;
            }
            else if(flag == 1){
                i -= 1;
            }
        }
        return i;
    
    }
};