// 14 July 2023

#include <bits/stdc++.h>
using namespace std; /**


  * Definition for a binary tree node.
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  * };
  */

class Solution
{
public:
    TreeNode *ans = NULL;

    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {

        if (original == NULL)
        {
            return ans;
        }

        if (original == target)
        {
            ans = cloned;
            return ans;
        }

        getTargetCopy(original->left, cloned->left, target);
        getTargetCopy(original->right, cloned->right, target);

        return ans;
    }
};