// 15 March 2023

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
    bool isCompleteTree(TreeNode *root)
    {

        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);

        bool check = true;

        while (!q.empty())
        {

            while (q.front() != NULL)
            {
                TreeNode *temp = q.front();
                q.pop();

                if (temp->left == NULL)
                {
                    check = false;
                }
                else
                {
                    if (check == false)
                    {
                        return false;
                    }
                    q.push(temp->left);
                }

                if (temp->right == NULL)
                {
                    check = false;
                }
                else
                {
                    if (check == false)
                    {
                        return false;
                    }
                    q.push(temp->right);
                }
            }

            if (q.front() == NULL)
            {
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