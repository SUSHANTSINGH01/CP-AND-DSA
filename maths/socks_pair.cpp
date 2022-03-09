int Solution::solve(vector<int> &A) 
{
    unordered_map<int,int>mp;
    int res=0;
    int n=A.size();
    for(int i=0;i<n;i++)
    mp[A[i]]++;

    for(auto it:mp)
    res+=(it.second/2);

    return res;
}
