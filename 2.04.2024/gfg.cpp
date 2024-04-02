class Solution
{
    public:
    int ans=INT_MAX;
    
 void solve(Node* root,int &last)
 {
       if(!root) return;
        solve(root->left, last);
     if(last!=-1)
     {
         ans = min(ans,root->data-last);
     }
     
     last = root->data;
     solve(root->right,last);
 }
    int absolute_diff(Node *root)
    {
        int last =-1;
        solve(root,last);
        return ans;
    }
};