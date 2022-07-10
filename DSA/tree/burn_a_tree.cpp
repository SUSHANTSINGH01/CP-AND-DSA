/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 pair<int,pair<int,int>> solve1(TreeNode* A, int b, int &res)
 {
    if(!A)
    return {-1,{0,0}};
    
    if(A->val==b)
    return {1,{1,1}};
    
    pair<int,pair<int,int>>temp1=solve1(A->left,b,res);
    pair<int,pair<int,int>>temp2=solve1(A->right,b,res);
    
    if(temp1.first==-1 && temp2.first==-1)
    return {-1, {max(temp1.second.first, temp2.second.first)+1, 0}};
    
    else if(temp1.first!=-1 && temp2.first==-1)
    {
        res= max(res, temp1.second.second+temp2.second.first);
        return {1, {max(temp1.second.first, temp2.second.first)+1, temp1.second.second+1}};
    }
    
    else
    {
        res=max(res, temp2.second.second+temp1.second.first);
        return {1, {max(temp1.second.first, temp2.second.first)+1, temp2.second.second+1}};
    }
}
int Solution::solve(TreeNode* A, int B) {
    int res=0;
    solve1(A,B,res);
    return res;
    
}
