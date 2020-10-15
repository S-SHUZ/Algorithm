/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        queue<TreeNode*> q;//创建队列存放结点
        if(root)
            q.push(root);
        
        vector<vector<int>> vv;

        while(!q.empty())
        {
            vector<int> v;
            int levelSize=q.size();
            //一层走完，队列的size就是下一层结点的个数
            for(int i=0;i<levelSize;i++)
            {
                TreeNode* front=q.front();//取出队头元素
                q.pop();//第一次出的是root
                v.push_back(front->val);
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
            }
            vv.push_back(v);
        }
        return vv;
    }
};