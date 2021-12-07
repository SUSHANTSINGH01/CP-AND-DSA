int Solution::solve(vector<int> &A, int B) 
{
    int c=0;
    unordered_map<int,int>mp;
    for(int i=0;i<A.size();i++)
    mp[A[i]]=1;
 
    for(int i=0;i<A.size();i++)
    {
        int ch=B^A[i];

        if(mp[ch]==1)
        {
            c++;
            mp[ch]=0;
            mp[A[i]]=0;
        }
    }

    return c;
}
