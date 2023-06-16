// 16 June 2023

#include <bits/stdc++.h>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{

    vector<int> v;

public:
    void postorder1(Node *root)
    {
        if (root == NULL)
        {
            return;
        }

        int sz = root->children.size();

        if (sz == 0)
        {
            v.push_back(root->val);
            return;
        }

        for (int i = 0; i < sz; i++)
        {
            postorder1(root->children[i]);
        }
        v.push_back(root->val);
    }

    vector<int> postorder(Node *root)
    {

        if (root == NULL)
        {
            return v;
        }

        postorder1(root);

        return v;
    }
};