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
    void fun(TreeNode*root , int&depth , int temp)
    {
        if(root==NULL)
        { 
            depth= max(depth,temp);
            temp=0;   
            return;
        }
        temp++;
        fun(root->left,depth,temp);
        fun(root->right,depth,temp);
        return;
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int depth = 0;
        int temp=0;
        fun(root , depth,temp);
        return depth;
    }
};