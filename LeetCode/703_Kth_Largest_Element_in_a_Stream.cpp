// 23 May 2023

#include <bits/stdc++.h>
using namespace std;


class KthLargest {

private:
    vector<int> v;
    int t;
    priority_queue<int,vector<int>,greater<int>> pq;

public:
    KthLargest(int k, vector<int>& nums) {
        for(auto it : nums)
        pq.push(it);

        t = k;
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size()>t)
        {
            pq.pop();
        }
        return pq.top();      
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */