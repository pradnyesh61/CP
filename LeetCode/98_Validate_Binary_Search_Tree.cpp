// 1 March 2023

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
    // bool check(TreeNode* root,long min,long max)
    // {
    //     if(!root)
    //     {
    //         return true;
    //     }

    //     if(root->val <= min || root->val >= max)
    //     {
    //         return false;
    //     }

    //     return check(root->left,min,root->val) && check(root->right,root->val,max);
    // }
    // bool isValidBST(TreeNode* root) {
    //     if(root == NULL)
    //     {
    //         return true;
    //     }

    //     return check(root,LONG_MIN,LONG_MAX);

    // }

    void check(TreeNode *root, vector<long> &v)
    {
        if (root == NULL)
        {
            return;
        }

        check(root->left, v);
        v.push_back(root->val);
        check(root->right, v);
    }

    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }

        vector<long> v;
        check(root, v);

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i - 1] >= v[i])
            {
                return false;
            }
        }
        return true;
    }
};