int Solution::solve(vector<int> &A, int B)
{
    unordered_map<int,int>mp;
    
    for(int i=0;i<A.size();i++)
    mp[A[i]]=i+1;
 
    
    for(int i=0;i<A.size();i++)
    if(mp[B+A[i]]>=1 && mp[B+A[i]]!=i+1)
    return 1;
    

    return 0;
}
