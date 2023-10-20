// 20 October 2023

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

set<int> v;

void traverse(TreeNode* root)
{
    if(root == NULL)
    {
        return ;
    }

    cout<<root->val<<endl;

    v.insert(root->val);
    traverse(root->left);
    traverse(root->right);
    return;
}


    int findSecondMinimumValue(TreeNode* root) {
       traverse(root); 
        

        if(v.size() < 2)
        return -1;

        auto it : s

        return *s[s.begin()+1];

    }
};