// 4 October 2023

#include <bits/stdc++.h>
using namespace std;

class MyHashMap
{
public:
    vector<vector<int>> v;

    MyHashMap()
    {
    }

    void put(int key, int value)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i][0] == key)
            {
                v[i][1] = value;
                return;
            }
        }

        vector<int> v1(2);
        v1[0] = key;
        v1[1] = value;
        v.push_back(v1);
    }

    int get(int key)
    {
        for (auto it : v)
        {
            if (it[0] == key)
            {
                return it[1];
            }
        }
        return -1;
    }

    void remove(int key)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i][0] == key)
            {
                v.erase(v.begin() + i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */