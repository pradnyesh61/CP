
// 16 Feb 2023

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
    int count = 0;

public:
    queue<TreeNode *> q;

    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            while (q.front() != NULL)
            {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->left != NULL)
                    q.push(temp->left);
                if (temp->right != NULL)
                    q.push(temp->right);
            }
            if (q.front() == NULL)
            {
                q.pop();
                count++;
                if (!q.empty())
                    q.push(NULL);
            }
        }

        return count;
    }
};