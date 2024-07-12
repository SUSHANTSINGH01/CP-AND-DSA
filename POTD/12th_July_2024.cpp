class Solution {
  public:
    bool solve(Node *root, int target, int &sum)
    {
        if(!root)
        return 0;
        
        sum+=root->data;
        
        if(sum==target && root->left==0 && root->right==0)
        return 1;
        
        bool a=solve(root->left,target,sum);
        bool b=solve(root->right,target,sum);
        
        sum-=root->data;
        
        return a||b;
    }

    bool hasPathSum(Node *root, int target) {
        // Your code here
        int sum=0;
        return solve(root,target,sum);
    }
};
