// 29 June 2023

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
class Solution {
public:

vector<int> v1,v2;

void first(TreeNode* root)
{
    if(root == NULL)
    {
        return ;
    }

    if(root->left == NULL && root->right == NULL)
        v1.push_back(root->val);
        
    first(root->left);
    first(root->right);

    return ;
}


void second(TreeNode* root)
{
    if(root == NULL)
    {
        return ;
    }

    if(root->left == NULL && root->right == NULL)
        v2.push_back(root->val);
    second(root->left);
    second(root->right);

    return ;
}

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        first(root1);
        second(root2);

        if(v1 == v2)
        {
            return true;
        }

        return false;
    }
};