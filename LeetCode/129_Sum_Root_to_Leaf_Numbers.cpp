// 14 March 2023

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
    // void helper(TreeNode* root, int &sum,int temp)
    // {
    //     if(root == NULL)
    //     {
    //         return ;
    //     }

    //     temp = temp * 10 + root->val;

    //     if(root->left == NULL && root -> right == NULL)
    //     {
    //         sum += temp;
    //         return ;
    //     }

    //     helper(root->left,sum,temp);
    //     helper(root->right,sum,temp);

    //     temp = temp / 10;
    // }

    //  int sumNumbers(TreeNode* root) {
    //     int sum = 0;
    //     int temp = 0;
    //   return helper(root,temp);
    //     return sum;
    // }

    int helper(TreeNode *root, int temp)
    {
        if (root == NULL)
        {
            return 0;
        }

        temp = temp * 10 + root->val;

        if (root->left == NULL && root->right == NULL)
        {
            return temp;
        }

        return helper(root->left, temp) + helper(root->right, temp);
    }

    int sumNumbers(TreeNode *root)
    {

        return helper(root, 0);
    }
};