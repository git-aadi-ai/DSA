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
    void inorder(TreeNode*p,vector<int>&arr)
    {
        if(p==NULL)
        {
            arr.push_back(-40000);
            return;
        }
        arr.push_back(p->val);
        inorder(p->left,arr);
        inorder(p->right,arr);
        return ;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q!=NULL)
        {
            return false;
        }
        if(p!=NULL && q==NULL)
        {
            return false;
        }
        vector<int>arr;
        inorder(p,arr);
        int temp = arr.size();
        inorder(q,arr);
        int i=0;
        int j=temp;
        while(j<arr.size())
        {
            if(arr[i]==arr[j])
            {
                i++;
                j++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};