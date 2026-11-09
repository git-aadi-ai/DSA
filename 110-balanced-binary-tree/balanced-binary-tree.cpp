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
    bool ans = true;
    int fun(TreeNode*root)
    {
        if(root==NULL)
        {
           return 0;
        }
        int left = fun(root->left);
        int right = fun(root->right);
        int temp = left-right;
        if(abs(temp)>1)
        {
            ans = false;
        }
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        int res = fun(root);
        return ans;
    }
};