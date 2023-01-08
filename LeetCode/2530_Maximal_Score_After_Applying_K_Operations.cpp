
//Weekly Contest 327
//8 jan 2023

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        priority_queue<int> pq(nums.begin(),nums.end());
    
        long long n = nums.size();   
        long long sum = 0;
        
        
        while(!pq.empty() && k-- > 0)
        {
                int t = pq.top();
            
                sum += t;
                pq.pop();

                if(t%3 == 0)
                pq.push((t/3));
                else
                pq.push((t/3+1));
        }
    
        
        return sum;
    }

};

int main()
{
    vector<int> v = {1,10,3,3,3};

    Solution s;
    cout<<s.maxKelements(v,3);
}