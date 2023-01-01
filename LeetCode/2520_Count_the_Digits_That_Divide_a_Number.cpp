// Given an integer num, return the number of digits in num that divide num.
// An integer val divides nums if nums % val == 0.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        
        int count = 0 ;
        int n = num;
         
        while(num)
        {
            int rem = num%10;
            if(n%rem == 0)
            {
                count++;
            }
            num = num/10;
        }
        
        return count;
        
    }
};

int main()
{
    Solution s;
    cout<<s.countDigits(121);
}