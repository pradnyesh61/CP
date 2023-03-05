// 5 March 2023

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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        if(root == NULL)
        {
            return 0;
        }
        
        vector<long long> v;
        
        queue<TreeNode* > q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            long long sum = 0;
            while(q.front() != NULL)
            {
                sum += q.front()->val;
                if(q.front()->left != NULL)
                q.push(q.front()->left);
                
                if(q.front()->right != NULL)
                q.push(q.front()->right);
                
                q.pop();
            }
            
            if(q.front() == NULL)
            {
                q.pop();
                 v.push_back(sum);
                if(q.size() == 0)
                break;
                    q.push(NULL);
                
               
                
            }
        }
        
        sort(v.begin(),v.end());
        
        for(auto it : v)
        {
            cout<<it<<" ";
        }
        
        if(v.size() < k)
            return -1;
        return v[v.size()-k];
        
        
    }
};