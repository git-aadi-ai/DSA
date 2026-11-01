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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
        {
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        int t = 0;
        while(!q.empty())
        {
            int level_size=q.size();
            vector<int>temp;
            while(level_size--)
            {
                TreeNode*u=q.front();
                q.pop();
                temp.push_back(u->val);
                if(u->left!=NULL)
                {
                    q.push(u->left);
                }
                if(u->right!=NULL)
                {
                    q.push(u->right);
                }
            }
            if(t%2!=0)
            {
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
            }
            if(t%2==0)
            {
                ans.push_back(temp);
            }
            t++;
        }
        return ans;
    }
};