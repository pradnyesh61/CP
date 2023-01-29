
// 29 Jan 2023

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void backtrack(TreeNode *root, vector<string> &v, string &s)
    {

        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(s);
            return;
        }

        if (root->left != NULL)
        {
            string sl = to_string(root->left->val);
            s += "->" + sl;
            backtrack(root->left, v, s);
            int n = sl.length() + 2;
            while (n--)
            {
                s.pop_back();
            }
        }

        if (root->right != NULL)
        {
            string sl = to_string(root->right->val);
            s += "->" + sl;
            backtrack(root->right, v, s);
            int n = sl.length() + 2;
            while (n--)
            {
                s.pop_back();
            }
        }

        return;
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {

        vector<string> v;

        if (root == NULL)
        {
            return v;
        }

        string s;
        s = to_string(root->val);
        backtrack(root, v, s);

        return v;
    }
};