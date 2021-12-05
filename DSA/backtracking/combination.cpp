void solve(int n, int k, int begin, vector<vector<int> > &ans, vector<int> ans1)
{
    if(k == 0)
    {
        ans.push_back(ans1);
        return;
    }
    
    
    for(int i=begin; i<=n; i++)
    {
        ans1.push_back(i);
        solve(n, k-1, i+1, ans, ans1);
        ans1.pop_back();
    }
}


vector<vector<int> > Solution::combine(int A, int B)
 {

    vector<vector<int> > ans;
    vector<int> ans1;
    
    solve(A, B, 1, ans, ans1);
    sort(ans.begin(), ans.end());
    
    return ans;
}
