/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode *node, long int pos,map<long  int, long int> &mp)
{
    
    if (node == NULL) 
    return;
    solve(node->left, pos-1, mp);
    mp[pos] += node->val;
    solve(node->right, pos+1, mp);
}
vector<int> Solution::verticalSum(TreeNode* A) 
{

    map<long int, long int>mp;
   
    solve(A, 0,mp);
  
    vector<int>ans;
    for (auto it:mp)
    ans.push_back(it.second);
    return ans;
}
