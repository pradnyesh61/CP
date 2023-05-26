// 26 May 2023

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
    vector<double> ans;

public:
    vector<double> averageOfLevels(TreeNode *root)
    {
        if (root == NULL)
        {
            return ans;
        }

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int k = q.size();
            double sum = 0;

            for (int i = 0; i < k; i++)
            {
                TreeNode *temp = q.front();
                q.pop();

                sum += temp->val;

                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    q.push(temp->right);
                }
            }
            ans.push_back((sum / k));
        }

        return ans;
    }
};