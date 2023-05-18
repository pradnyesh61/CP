// 18 May 2023

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

private:
int count = 1;

public:
    int minDepth(TreeNode* root) {
        
        if(root == NULL)
        {
            return 0;
        }

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();

            if(node == NULL)
            {
                count++;
                q.push(NULL);
                continue;
            }
            else if(node->left == NULL && node->right == NULL)
            {
                return count;
            }

            if(node->left != NULL)
            {
                q.push(node->left);
            }
            
            if(node->right != NULL)
            {
                q.push(node->right);
            }

            
            
        }

        return count;


    }
};