void backtrack(vector<int>&A, int st, vector<vector<int>>&res, vector<int>&v)
{
    res.push_back(v);
    for(auto i=st; i<A.size(); i++)
    {
        v.push_back(A[i]);
        backtrack(A, i+1, res, v);
        v.pop_back();
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A) 
{
    sort(A.begin(), A.end());
    
    vector<vector<int>>res;
    vector<int>v;
    
    backtrack(A, 0, res, v);
    
    return res;
}
