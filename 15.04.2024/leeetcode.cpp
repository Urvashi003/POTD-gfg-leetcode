class Solution {
public:
int res = 0;

    void solve(TreeNode* curr, int x)
    {
         x = x*10+curr->val;

        //  base case 
         if(curr-> left == NULL && curr->right == NULL)
         {
            res = res +x;
            return ;
         }

         if(curr->left !=NULL)
         solve(curr->left,x);
        if(curr->right!=NULL)
        solve(curr->right,x);

    }
    int sumNumbers(TreeNode* root) {
        solve(root,0);
        return res;
    }
};