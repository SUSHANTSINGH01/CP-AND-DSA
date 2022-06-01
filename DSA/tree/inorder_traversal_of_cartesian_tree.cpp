/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ind(vector<int> &A, int l, int r)
{
    int maxx=A[l];
    int index=l;
    for(int i=l;i<=r;i++)
    {
        if(maxx<A[i])
        {
            maxx=A[i];
            index=i;
        }
    }
    return index;
} 
TreeNode  *solve(vector<int>&a,int l,int r)
{
    if(l>r)
    return 0;

    int pos=ind(a,l,r);

    TreeNode *head=new TreeNode(a[pos]);
    head->left=solve(a,l,pos-1);
    head->right=solve(a,pos+1,r);
    return head;
}
TreeNode* Solution::buildTree(vector<int> &A)
{
    int n=A.size();
    if(n==0)
    return 0;

    return solve(A,0,n-1);
}
