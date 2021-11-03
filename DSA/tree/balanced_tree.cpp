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

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int solve(Node *root,bool &ans)
    {
        if(root==0)
        return 0;
            
        int lefft=solve(root->left,ans);
        int righht=solve(root->right,ans);
        
       
        
        if(abs(lefft-righht)>1) 
       {
           ans=0;
           return 1+max(lefft,righht);
       }
        
        return 1+max(lefft,righht);
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        bool ans=1;
        solve(root,ans);
        
        return ans;
    }
};

