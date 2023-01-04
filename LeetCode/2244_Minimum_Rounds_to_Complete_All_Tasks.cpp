// You are given a 0-indexed integer array tasks, where tasks[i] represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the same difficulty level.

// Return the minimum rounds required to complete all the tasks, or -1 if it is not possible to complete all the tasks.

 
//4 jan 2023


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

 int count = 0;
    void check_d(int n)
    {
        while(n)
        {
             if(n%3 == 0)
            {
                count += (n/3);
                return ;
            }
            else if(n > 4)
            {
                n -= 3;
                count++;
            }
            else if(n%2 ==0)
            {
                count += (n/2);
                return ;
            }
        }

        return ;
    }


    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int,int> m;

        for(int i = 0 ; i<tasks.size() ; i++)
        {
            m[tasks[i]]++;
        }

        unordered_map<int,int> :: iterator it;

        for(it = m.begin() ; it != m.end() ; it++)
        {
             if(it->second % 3 == 0)
            {
                count += (it->second/3);
            }
            else if(it->second < 2 )
            {
                return -1;
            }
            else{
                    check_d(it->second);
            }
        }

        return count;
    }
/*
    int minimumRounds(vector<int>& A) {
        unordered_map<int, int> count;
        int res = 0, freq1;
        for (int a: A)
            ++count[a];
        for (auto& it: count) {
            if (it.second == 1) return -1;
            res += (it.second + 2) / 3;
        }
        return res;
    }
    */
};

int main()
{
    vector<int> v = {2,2,3,3,2,4,4,4,4,4};
    Solution s ;
    cout<<s.minimumRounds(v);

}