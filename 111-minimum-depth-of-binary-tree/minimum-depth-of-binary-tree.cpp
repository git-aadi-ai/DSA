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
    void fun(TreeNode*root,int &depth,int temp)
    {
        if(root==NULL)
        {
            return;
        }
        temp++;
        if(root->left==NULL && root->right==NULL)
        {
            depth=min(temp,depth);
            temp=0;
            return;
        }
        fun(root->left,depth,temp);
        fun(root->right,depth,temp);
        return ;        
    }
    int minDepth(TreeNode* root) {
     int temp=0;
     int depth = INT_MAX;  
     fun(root,depth,temp);
     if(depth==INT_MAX)
     {
        return 0;
     }
     return depth;
    }
};