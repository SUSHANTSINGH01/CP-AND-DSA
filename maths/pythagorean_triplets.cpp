int Solution::solve(int A) 
{
    unordered_map<int,int>mp;

    for(int i=1;i<=A;i++)
    {
        int x=pow(i,2);
        mp[x]++;
    }
    int c=0;
    for(int i=1;i<=A-1;i++)
    {
        for(int j=i+1;j<=A;j++)
        {
            int y=pow(i,2);
            int z=pow(j,2);

            if(mp.count(y+z))
            c++;
        }
    }
    return c;
}
