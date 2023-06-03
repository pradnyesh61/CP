// 3 June 2023

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
    bool isCousins(TreeNode *root, int x, int y)
    {
        if (root == NULL)
        {
            return false;
        }

        queue<pair<TreeNode *, TreeNode *>> q;
        q.push({root, root});

        TreeNode *a1 = NULL;
        TreeNode *b1 = NULL;

        bool a = false, b = false;

        while (!q.empty())
        {
            int sz = q.size();

            while (sz--)
            {
                pair<TreeNode *, TreeNode *> temp = q.front();
                q.pop();

                if (temp.second->val == x && a == false)
                {
                    a1 = temp.first;
                    a = true;
                }

                if (temp.second->val == y && b == false)
                {
                    b1 = temp.first;
                    b = true;
                }

                if (temp.second->left != NULL)
                {
                    q.push({temp.second, temp.second->left});
                }

                if (temp.second->right != NULL)
                {
                    q.push({temp.second, temp.second->right});
                }
            }

            if (a && b)
            {
                if (a1 != b1 && a1 != NULL && b1 != NULL)
                    return true;
                return false;
            }
            else if (a || b)
            {
                return false;
            }
        }

        return false;
    }
};