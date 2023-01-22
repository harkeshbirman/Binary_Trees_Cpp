// struct treenode {
//     int val;
//     treenode *left,
//     treenode *right
// }

void inOrder(treenode *root) {
    if(root == NULL) {
	return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}
