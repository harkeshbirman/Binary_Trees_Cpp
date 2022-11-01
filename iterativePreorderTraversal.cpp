class preOrder {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        TreeNode *curr, *pre, *temp;
        curr = root;
        while(curr){
            ans.push_back(curr->val);
            if(curr->left){
                pre = curr->left;
                while(pre->right){
                    pre = pre->right;
                }
                pre->right = curr->right;
                temp = curr;
                curr = curr->left;
                temp->left = NULL;
            }
            else{
                curr = curr->right;
            }
        }
        return ans;
    }
};
