// 16 March 2023

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
// vector<int> v;

//     void helper(vector<int>& inorder, vector<int>& postorder,
//                 int idx,int start,int end,TreeNode* &root)
//     {
//         if(start > end ) {
//             return;
//         }

//        // TreeNode* temp = new TreeNode(postorder[idx]); 
//         root = new TreeNode(postorder[idx]); 
//         v.push_back(postorder[idx]);
//         auto it1 = find(inorder.begin()+start,inorder.begin()+end, postorder[idx]);
//         if(it1 != inorder.end() )
//         {
//             int it = it1 - inorder.begin();
//            // if(0 <= it)
//             {
//                 for(int i = idx+1 ; i < postorder.size() ; i++)
//                 {
//                     auto itk = find(inorder.begin()+start,inorder.begin()+it, postorder[i]);
//                    // if(itk <= inorder.begin()+it)
//                      if(itk != inorder.end())
//                         {
//                             helper(inorder,postorder,i,start+1,it,root->left);
//                             break;
//                         }
//                 }    

//             }
           
//             //if(it < preorder.size() )
//             {
//                  for(int i = idx+1 ; i < postorder.size() ; i++)
//                 {        
//                     auto itk = find(inorder.begin()+it,inorder.begin()+end, postorder[i]);
//                     //if(itk <= end)
//                      if(itk != inorder.end())
//                     {
//                         helper(inorder,postorder,i,it,end,root->right);
//                         break;
//                     }
//                 }
//             }
//         }
//     }

    
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//      TreeNode* root = NULL;
//      reverse(postorder.begin(),postorder.end());
//       helper(inorder,postorder,0,0,postorder.size(),root);

//       for(auto it : v)
//       {
//           cout<<it<<" ";
//       }
//         return root;
//     }


    TreeNode* helper(vector<int> &inorder,int istart,int iend,
                    vector<int> &postorder,int pstart,int pend)
    {
        if(pstart > pend || istart > iend)
        {
            return NULL;
        }

        TreeNode* root = new TreeNode(postorder[pend]);
        int inorderPosition = istart;

        while(root->val != inorder[inorderPosition])
        inorderPosition++;

        root->left = helper(inorder,istart,inorderPosition-1,postorder,pstart,pstart+inorderPosition-istart-1);
        root->right = helper(inorder,inorderPosition+1,iend,postorder,pstart+inorderPosition-istart,pend-1);

        return root;
    }

     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
            
    // TreeNode* helper(vector<int>& inorder ,int istart ,int iend ,
    //                 vector<int>& postorder ,int pstart, int pend, map<int,int> m)
    // {
    //     if(pstart> pend || istart> iend)
    //     {
    //         return NULL;
    //     }

    //     TreeNode* root = new TreeNode(postorder[pend]);
    //     int inrootposition = m[postorder[pend]];
    //     int left = inrootposition - istart;

    //     root->left = helper(inorder,istart,inrootposition-1,postorder,pstart,pstart+left-1,m);

    //     root->right = helper(inorder,inrootposition+1,iend,postorder,pstart+left,pend-1,m);
    //     return root;
    // }

    //   TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      
    //   map<int,int> m;

    //   for(int i =0; i < inorder.size(); i++)
    //   {
    //       m[inorder[i]] = i;
    //   }

    //   return helper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,m);

    // }

};