vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) 
{

    map<int, vector<int>> mp;
    int pos=0;
    vector<vector<int>>ans;
    queue<pair<TreeNode*, int>>q;
    
    if (A==0)
    return ans;

    q.push({A,0});
    while (!q.empty())
    {
        pair<TreeNode *,int>temp=q.front();
        q.pop();
        pos=temp.second;
        TreeNode* root=temp.first;
        mp[pos].push_back(root->val);
 
        if(root->left)
        q.push({root->left,pos-1});
        if(root->right)
        q.push({root->right,pos+1});
    }
    for(auto it : mp)
    ans.push_back(it.second);

    return ans;
}
