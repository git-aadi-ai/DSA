class Solution {
public:
    void fun(TreeNode*root, vector<int>&arr)
    {
        if(root == NULL)
            return;

        fun(root->left, arr);
        arr.push_back(root->val);
        fun(root->right, arr);
    }
    void change(TreeNode* root, int first, int second)
{
    if(root == NULL)
        return;

    if(root->val == first || root->val == second)
    {
        if(root->val == first)
            root->val = second;
        else
            root->val = first;
    }

    change(root->left, first, second);
    change(root->right, first, second);
}

    void recoverTree(TreeNode* root) {

        vector<int>arr;
        fun(root, arr);

        int galat1f;
        int galat1s;
        int galat2s;
        int galat = 0;

        for(int i = 0; i < arr.size()-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                if(galat == 0)
                {
                    galat1f = arr[i];
                    galat1s = arr[i+1];
                    galat++;
                }
                else
                {
                    galat2s = arr[i+1];
                    galat++;
                }
            }
        }

        int first, second;

        if(galat == 1)
        {
            first = galat1f;
            second = galat1s;
        }
        else
        {
            first = galat1f;
            second = galat2s;
        }
        change(root,first,second);
        // Actual BST nodes ki values update karni hongi
    }
};