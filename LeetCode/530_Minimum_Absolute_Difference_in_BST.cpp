// 14 June 2023

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

private:
    int mini = INT_MAX;
    TreeNode *prevNode = NULL;
    // vector<int> v;
public:
    // void Inorder(TreeNode* root)
    // {
    //     if(root == NULL)
    //     {
    //         return ;
    //     }

    //     Inorder(root->left);
    //     v.push_back(root->val);
    //     Inorder(root->right);

    // }

    // int getMinimumDifference(TreeNode* root) {
    //     Inorder(root);

    //     int mini = INT_MAX;

    //     for(int i = 1 ; i < v.size() ; i++){
    //         int diff = v[i]- v[i-1];
    //         if(diff < mini)
    //         {
    //             mini= diff;
    //         }
    //     }

    //     return mini;

    // }

    void Inorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        Inorder(root->left);

        if (prevNode != NULL)
        {
            mini = min(mini, root->val - prevNode->val);
        }
        prevNode = root;
        Inorder(root->right);
    }

    int getMinimumDifference(TreeNode *root)
    {
        Inorder(root);
        return mini;
    }
};