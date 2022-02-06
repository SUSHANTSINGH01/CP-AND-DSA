int Solution::solve(vector<int> &A) 
{
    unordered_map<int,int>mp;
    sort(A.begin(),A.end());
    
    int n=A.size();
    for(int i=0;i<n;i++)
    mp[A[i]]=n-1-i;

    for(auto it:mp)
    if(it.first==it.second)
    return 1;
    return -1;

}
