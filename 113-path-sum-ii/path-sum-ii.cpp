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
    vector<vector<int>>ans;
    void fun(TreeNode*root,int target , vector<int>diary,int sum)
    {
        if(root==NULL)
        {
            return ;
        }
        sum=sum+root->val; diary.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            if(sum==target)
            {
                ans.push_back(diary);
                diary.pop_back();
            }
            return;
        }
        fun(root->left,target,diary,sum);
        fun(root->right,target,diary,sum);
        diary.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       int sum=0;
       vector<int>diary;
       fun(root,targetSum,diary,sum);
       return ans; 
    }
};