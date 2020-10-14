class Solution {
public:
    bool isValidBST(TreeNode* root) 
    {
        return DFS(root,LONG_MIN,LONG_MAX);
    }
    bool DFS(TreeNode* root,long long low,long long max)
    {
        if(!root) return true;
        if(root->val<=low||root->val>=max) return false;
        return DFS(root->left,low,root->val)&&DFS(root->right,root->val,max); 
    }
};