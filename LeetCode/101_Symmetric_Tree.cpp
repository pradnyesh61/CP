// 13 March 2023

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
    bool isSymmetric(TreeNode *root)
    {

        if (root == NULL)
        {
            return true;
        }

        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            vector<int> v;

            while (q.front() != NULL)
            {
                TreeNode *temp = q.front();
                q.pop();

                if (temp->left != NULL)
                {
                    q.push(temp->left);
                    v.push_back(temp->left->val);
                }
                else
                {
                    v.push_back(101);
                }
                if (temp->right != NULL)
                {
                    q.push(temp->right);
                    v.push_back(temp->right->val);
                }
                else
                {
                    v.push_back(101);
                }
            }

            if (q.front() == NULL)
            {
                for (int i = 0; i < v.size() / 2; i++)
                {
                    if (v[i] != v[v.size() - 1 - i])
                    {
                        return false;
                    }
                }

                q.pop();
                if (q.size() > 0)
                {
                    q.push(NULL);
                }
            }
        }
        return true;
    }
};