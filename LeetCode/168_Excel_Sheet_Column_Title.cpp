// 22 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        
        
         string output;
        while(n > 0){
            n--;
            int m = n % 26;
            n /= 26;
            output += 'A' + m;
        }
        reverse(output.begin(),output.end());
        return output;   
        
    }
};