// 30 May 2023

#include <bits/stdc++.h>
using namespace std;


class MyHashSet {

private:
vector<int> v;

public:

    MyHashSet() {
        v.resize(1000001,-1);
    }
    
    void add(int key) {
        v[key] = 1;
    }
    
    void remove(int key) {
        v[key] = -1;
    }
    
    bool contains(int key) {
        if(v[key] >= 0)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */