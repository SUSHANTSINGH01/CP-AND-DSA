class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool checkBST(int minn,int maxx,Node *root)
    {
        if(root==NULL)
        return true;
        
        return (checkBST(minn,root->data,root->left) && checkBST(root->data,maxx,root->right) && minn<root->data && maxx>root->data);
    }
    bool isBST(Node* root) {
        // Your code here
        int minn=INT_MIN;
        int maxx=INT_MAX;
        return checkBST(minn,maxx,root);
    }
};
