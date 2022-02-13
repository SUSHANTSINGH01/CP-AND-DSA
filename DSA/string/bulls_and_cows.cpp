string Solution::solve(string A, string B) 
{
    unordered_map<int,int>mp;
    int n=A.size();
    int c=0;
    int d=0;
    for(int i=0;i<n;i++)
    mp[A[i]]++;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]==B[i])
        {
          c++;
          mp[A[i]]--;
        }
    }

    for(int i=0;i<n;i++)
    if(A[i]==B[i])
    continue;
    else
    {
        mp[B[i]]++;
        if(mp[B[i]]>=2)
        {
            d++;
            mp[B[i]]--;
        }
        mp[B[i]]--;
    }

    return to_string(c)+'A'+to_string(d)+'B';
}
