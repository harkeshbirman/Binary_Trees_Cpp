class levelOrder {
  public:
  vector<vector<int>> levelOrder(tree *root){
      vector<vector<int>> ans;
      if(root == NULL){
          return ans;
      }
      queue<tree *> q;
      q.push(root);

      while(!q.empty()){
          vector<int> level;
          int size = q.size();
          for(int i = 0; i < size; i++){
              tree *key = q.front();
              q.pop();
              if(key->left){
                  q.push(key->left);
              }
              if(key->right){
                  q.push(key->right);
              }
              level.push_back(key->data);
          }
          ans.push_back(level);
      }
      return ans;
  }
};
