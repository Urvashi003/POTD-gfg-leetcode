class Solution {
  public:
    int minValue(Node* root) {
        // Code here
       while(root->left) {
           root = root->left;
           
           
       }
       return root->data;
    }
};