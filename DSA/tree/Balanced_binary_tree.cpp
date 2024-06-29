

// Optimized Solution


class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int solve(Node *root)
    {
        if(root==0)
        return 0;
            
        int lefft=solve(root->left);
        int righht=solve(root->right);
        
        if(lefft==-1 || righht==-1) 
        return -1;
        
        if(abs(lefft-righht)>1) 
        return -1;
        
        return 1+max(lefft,righht);
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int ans=solve(root);
        //cout<<ans<<" ";
        return ans>0?1:0;
    }
};


// second approach


int solve(TreeNode *root)
    {
        if(root==0)
        return 0;
        
        return max(solve(root->left),solve(root->right))+1;
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==0)
        return 1;
        int left=solve(root->left);
        int right=solve(root->right);
        if(abs(left-right)>1)
        return 0;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};

