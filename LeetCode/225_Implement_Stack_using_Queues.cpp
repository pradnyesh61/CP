// 28 August 2023

#include <bits/stdc++.h>
using namespace std;

class MyStack
{

public:
    queue<int> q;
    queue<int> q2;

    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {

        while (q.size() != 1)
        {
            q2.push(q.front());
            q.pop();
        }

        int ans = q.front();
        q.pop();

        q = q2;

        while (!q2.empty())
        {
            q2.pop();
        }
        return ans;
    }

    int top()
    {

        while (q.size() != 1)
        {
            q2.push(q.front());

            q.pop();
        }

        int ans = q.front();
        q.pop();

        q2.push(ans);

        while (!q2.empty())
        {
            q.push(q2.front());
            q2.pop();
        }
        return ans;
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */