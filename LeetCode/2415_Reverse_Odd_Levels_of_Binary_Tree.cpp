// 2 June 2023

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
    TreeNode* reverseOddLevels(TreeNode* root) {
      
      if(root == NULL)
      {
          return root;
      }

      queue<TreeNode*> q;
      q.push(root);

      int odd = 0;

      while(!q.empty())
      {
          int sz = q.size();
       //   cout<<q.front()->val<<endl;

          if(odd%2 != 0)
          {
              queue<TreeNode*> q2(q);
              vector<TreeNode*> v;
              while(!q2.empty())
              {
                  v.push_back(q2.front());
                  q2.pop();
              }

                // for(auto it : v)
                // {
                //     cout<<it->val<<" ";
                // }
                // cout<<endl<<"size = "<<v.size()<<endl;

              for(int i = 0; i < v.size()/2 ; i++)
              {
                  int temp = v[i]->val;
              //  cout<<temp<<endl;
               // cout<<v[i]->val<<" = "<<v[sz-i-1]->val<<endl;
                  v[i]->val = v[sz-i-1]->val;
                  v[sz-i-1]->val = temp;
                //  cout<<v[i]->val<<" = "<<v[sz-i-1]->val<<endl;
              }
          }
        // cout<<q.front()->val<<endl<<endl;
          for(int i = 1 ; i <= sz ; i++)
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
          odd++;
      }

      return root;

    }
};