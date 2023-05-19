// 19 May 2023

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
    bool inorder(TreeNode *root, int n)
    {
        if (root == NULL)
        {
            return true;
        }

        if (root->val != n)
        {
            return false;
        }

        return inorder(root->left, n) && inorder(root->right, n);
    }

    bool isUnivalTree(TreeNode *root)
    {

        return inorder(root, root->val);
    }
};