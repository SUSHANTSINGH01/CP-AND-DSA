class Solution {
  public:
    // Function should return all the ancestor of the target node
    void solve(Node *root, int target, vector<int>&res, bool &f){
        
        if(!root)
        return ;
        
        if(root->data==target){
            f=true;
            return ;
        }
        
        if(!f)
        solve(root->left,target,res,f);
        
        if(!f)
        solve(root->right,target,res,f);
        
        if(f)
        res.push_back(root->data);
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int>res;
        bool f=0;
        solve(root,target,res,f);
        return res;
    }
};
