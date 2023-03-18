// 18 March 2023

#include <bits/stdc++.h>
using namespace std;

class BrowserHistory
{

private:
    stack<string> cur, backword;

public:
    BrowserHistory(string homepage)
    {
        cur.push(homepage);
    }

    void visit(string url)
    {
       backword = stack<string>();
        cur.push(url);
    }

    string back(int steps)
    {
        while (steps-- && cur.size() > 1)
        {
            backword.push(cur.top());
            cur.pop();
        }
        return cur.top();
    }

    string forward(int steps)
    {
        while (steps-- && backword.size() > 0)
        {
            cur.push(backword.top());
            backword.pop();
        }
        return cur.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */