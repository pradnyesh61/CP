/*
back tracking
we have root ,if root is null we will return
if root is not null that means we will be having 1 element
so we will add that to  string
now we need to check if root->left is null  and root->right is null
if it is then only we will add that string to vector as our ans
paths to leaf
if it is not then;
we need to check that if root has left child
if it does then we will add the val to string
and send it to the backtrack with left of root ie. root->left
and when it returns we need to pop back the added string
for that pop back is use but here is twist
pop back will remove only one character at a time and we dont know what is the length of the val
so we will take a lenght of val and add 2 ,why
because we are adding - and >
each counts as a character
now loop it and do pop_back

same for right element of root


*/

// 29 Jan 2023

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
    void backtrack(TreeNode *root, vector<string> &v, string &s)
    {

        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(s);
            return;
        }

        if (root->left != NULL)
        {
            string sl = to_string(root->left->val);
            s += "->" + sl;
            backtrack(root->left, v, s);
            int n = sl.length() + 2;
            while (n--)
            {
                s.pop_back();
            }
        }

        if (root->right != NULL)
        {
            string sl = to_string(root->right->val);
            s += "->" + sl;
            backtrack(root->right, v, s);
            int n = sl.length() + 2;
            while (n--)
            {
                s.pop_back();
            }
        }

        return;
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {

        vector<string> v;

        if (root == NULL)
        {
            return v;
        }

        string s;
        s = to_string(root->val);
        backtrack(root, v, s);

        return v;
    }
};