

// First Solution


int solve(TreeNode *root, int b)
{
    
    if (!root)
    return 0;

    if(!root->left && !root->right && root->val==b)
    return 1;
    
    b-=root->val;
    int l=solve(root->left,b);
    cout<<b<<endl;
    int r=solve(root->right,b);
    
    return l||r;
}
int Solution::hasPathSum(TreeNode* A, int B) 
{
    int sum=0;
    int res=solve(A,B);
    return res;
}


// Second Solution


 /**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int solve(TreeNode *root, int b,int sum)
 {
    if (!root)
    return 0;
   
     sum += root->val; 
    if(!root->left && !root->right)
    return sum==b;
    
    int l = solve(root->left,b,sum);
    int r = solve(root->right,b,sum);
   
    return (l||r);

 }
int Solution::hasPathSum(TreeNode* A, int B) 
{
    int sum=0;
    int res=solve(A,B,sum);
    return res;
}
