class inOrder {
public:
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> ans;
        TreeNode *curr, *pre;
        curr = root;
        while(curr){
            if(!curr->left){
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else{
                pre = curr->left;
                while(pre->right){
                    pre = pre->right;
                }
                pre->right = curr;
                TreeNode *temp = curr;
                curr = curr->left;
                temp->left = NULL;
            }
        }
        return ans;
    }
};
