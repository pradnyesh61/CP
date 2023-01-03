// Intuition
// need to check current columns char is greter than next columns char

// Approach
// Traverse through any one string length ,as all have same length
// now traverse through whole array to check column by column
// check if current columns char is greater than next columns char
// if yes then count++ and break no need to check further
// if no make current char as next char and check again for next
// return count

// Code


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int count = 0;
        int l = strs[0].length();
        int n =strs.size();

        for(int i = 0 ; i <l ;i++){
            
            char ch = strs[0][i];

            for(int j = 1; j < n ; j++){
            
                if(strs[j][i] < ch){
                    count++;
                    break;
                }

                ch = strs[j][i];
            }
        }

        return count;
    }
};

int main()
{
    vector<string> v = {"abc", "bce", "cae"};
    Solution s;
    cout<<s.minDeletionSize(v);
}