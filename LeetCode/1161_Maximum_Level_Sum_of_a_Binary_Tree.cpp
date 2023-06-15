// 15 June 2023

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
    int maxLevelSum(TreeNode *root)
    {

        int maxi = root->val;
        int level = 1;
        int lcount = 0;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int sz = q.size();
            int sum = 0;
            while (sz--)
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
            lcount++;
            if (maxi < sum)
            {
                maxi = sum;
                level = lcount;
            }
        }

        return level;
    }
};