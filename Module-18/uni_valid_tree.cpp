lass Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL) return true;
        int val = root->val;
        bool flag = true;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode * p = q.front();
            q.pop();
            if(p->val != val)
            {
                flag = false;
                break;
            }
            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);;
        }
        return flag;
    }
};