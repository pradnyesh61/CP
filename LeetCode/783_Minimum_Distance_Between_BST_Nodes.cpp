
// 17 Feb 2023

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
    vector<int> v;

    void values(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        v.push_back(root->val);

        values(root->left);
        values(root->right);
    }

    int minDiffInBST(TreeNode *root)
    {

        if (root == NULL)
        {
            return 0;
        }

        values(root);

        sort(v.begin(), v.end());

        int min = INT_MAX;

        for (int i = 0; i < v.size() - 1; i++)
        {
            int k = abs(v[i] - v[i + 1]);
            if (k < min)
            {
                min = k;
            }
        }

        return min;
    }
};