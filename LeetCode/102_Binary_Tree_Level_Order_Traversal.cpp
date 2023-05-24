// 24 May 2023

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

private:
    vector<vector<int>> order;

public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {

        if (root == NULL)
        {
            return order;
        }

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int k = q.size();
            vector<int> temp;
            for (int i = 0; i < k; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if (node != NULL)
                {
                    temp.push_back(node->val);

                    if (node->left != NULL)
                        q.push(node->left);
                    if (node->right != NULL)
                        q.push(node->right);
                }
            }

            order.push_back(temp);
        }
        return order;
    }
};