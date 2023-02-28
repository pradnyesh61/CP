// 27 Feb 2023

#include <bits/stdc++.h>
using namespace std;


  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:


    int deepestLeavesSum(TreeNode* root) {

        if(root == NULL)
        {
            return 0;
        }

        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            while(!q.front() == NULL)
            {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;

                if(temp->left != NULL) 
                q.push(temp->left);

                if(temp->right != NULL)
                q.push(temp->right);
            }

            if(q.front() == NULL)
            {
                q.pop();
                if(q.empty())
                {
                    return sum;
                }
                
                q.push(NULL);
                sum = 0;
            }

        }

        return 0;
    }
};