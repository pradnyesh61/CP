// 18 July 2023

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {

        vector<vector<int>> v;

        if (root == NULL)
        {
            return v;
        }

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int k = q.size();
            vector<int> temp;

            while (k--)
            {
                TreeNode *t = q.front();
                temp.push_back(t->val);
                q.pop();

                if (t->left != NULL)
                {
                    q.push(t->left);
                }
                if (t->right != NULL)
                {
                    q.push(t->right);
                }
            }
            if (temp.size() > 0)
            {
                v.push_back(temp);
            }
        }

        reverse(v.begin(), v.end());

        return v;
    }
};