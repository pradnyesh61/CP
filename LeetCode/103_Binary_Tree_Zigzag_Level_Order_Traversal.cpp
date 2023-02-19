// 18 Feb 2023

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> v;
        if(root == NULL)
        {
            return v;
        }
     
        queue<TreeNode*> q;

        bool leftright = true;

        q.push(root);
        q.push(NULL);

         while(!q.empty())
        {
            if(q.front() == NULL && q.size() == 1)
            {
                break;
            }
            vector<int> temp;
            if(q.front() != NULL)
            {
                while(q.front() != NULL)
                {
                    TreeNode* t = q.front();
                    temp.push_back(t->val);
                    q.pop();
                   
                    if(t->left != NULL)
                    q.push(t->left);
                    if(t->right != NULL)
                    q.push(t->right);
                }
            }
            
                if(leftright)
                {
                    leftright = false;
                }
                else{
                    leftright = true;
                    reverse(temp.begin(),temp.end());
                }
                v.push_back(temp);  
                 q.pop();
                 q.push(NULL);
        }

        return v;
        
    }
};