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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
        {
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty())
        {
            int levelsize = q.size();
            vector<int>temp;
            while(levelsize--)
            {
                TreeNode*tmp = q.front();
                q.pop();
                temp.push_back(tmp->val);
                if(tmp->left!=NULL)
                {
                    q.push(tmp->left);
                }
                if(tmp->right!=NULL)
                {
                    q.push(tmp->right);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};