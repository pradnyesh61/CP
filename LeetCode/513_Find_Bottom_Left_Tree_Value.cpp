// 31 May 2023

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
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }

        queue<TreeNode*> q;
        q.push(root);

        int val = 0;

        while(!q.empty())
        {
            int sz = q.size();
            val = q.front()->val;

            for(int i = 0; i<sz ; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right != NULL)
                {
                    q.push(temp->right);
                }
            }
        }

        return val;
    }
};