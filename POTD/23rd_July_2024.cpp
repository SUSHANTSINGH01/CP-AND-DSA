class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void solve(Node *root,vector<int>&res)
    {
        if(root==NULL)
        return;
        
        res.push_back(root->data);
        solve(root->left,res);
        solve(root->right,res);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int>res;
        solve(root1,res);
        solve(root2,res);
        sort(res.begin(),res.end());
        return res;
    }
};
