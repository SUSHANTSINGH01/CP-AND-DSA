class Solution {
  public:
  
    int sumTree(Node *root){
        
        if(root==NULL)
        return 0;
        
        if(!root->left && !root->right)
        return root->data;
        
        int l = sumTree(root->left);
        int r = sumTree(root->right);
        
        if(l==-1 || r==-1 || (l+r)!=root->data)
        return -1;
        
        else
        return l+r+root->data;
    }
    
    bool isSumTree(Node* root) {
        // Your code here
        return sumTree(root)==-1?0:1;
    }
};
