int Solution::diffPossible(const vector<int> &A, int B) 
{
    int n=A.size();  
    if(n<2)
    return {};
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        if(mp.find(A[i])==mp.end())
        mp[A[i]]=i;
    }
    for(int i=0; i<n; i++)
    {
        int k=B+A[i];
         if(mp.find(k) != mp.end() && mp[k]+1!=i+1)
        return 1;
    }
    return 0;
}
