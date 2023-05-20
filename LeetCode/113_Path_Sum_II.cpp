// 20 May 2023

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
    void path(TreeNode *root, int targetSum, int sum, vector<int> temp,
              vector<vector<int>> &ans)
    {

        if (root == NULL)
        {
            return;
        }

        if (root->left == NULL && root->right == NULL)
        {
            if (sum + root->val == targetSum)
            {
                temp.push_back(root->val);
                ans.push_back(temp);
            }
            return;
        }

        temp.push_back(root->val);
        sum += root->val;

        path(root->left, targetSum, sum, temp, ans);

        path(root->right, targetSum, sum, temp, ans);

        temp.pop_back();
        sum -= root->val;

        return;
    }

    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {

        vector<vector<int>> a;
        if (root == NULL)
        {
            return a;
        }
        vector<vector<int>> ans;
        vector<int> temp;
        path(root, targetSum, 0, temp, ans);
        return ans;
    }
};