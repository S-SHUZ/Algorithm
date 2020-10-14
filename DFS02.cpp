/*
求一个树的镜像树
TreeNode* mirrorTree(TreeNode* root)
{
	if(!root)
		return 	NULL;
	swap(root->left,root->right);
	
	mirrorTree(root->left);
	mirrorTree(root->right);
	return root;
}
*/







class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return isMorror(root->left,root->right);
    }
    bool isMorror(TreeNode* root1,TreeNode* root2)
    {
        if(!root1&&!root2)
            return true;//两棵树都为空
        if(!root1||!root2)
            return false;
        return isMorror(root1->left,root2->right)&&isMorror(root2->left,root1->right)&&root1->val==root2->val;
    }
};