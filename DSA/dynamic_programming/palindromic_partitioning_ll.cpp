int dp[505][505];
bool pal(int l,int r,string s)
{
    while(l<=r)
    {
        if(s[l]!=s[r])
        return 0;
        
        l++;
        r--;
    }
    return 1;
}

int solve(int l,int r,string s)
{
    if(l>=r)
    return dp[l][r]=0;
    
    else if(dp[l][r]!=-1)
    return dp[l][r];
    
    else if(pal(l,r,s))
    return dp[l][r]=0;
    
    int minn=INT_MAX;
    for(int i=l;i<r;i++)
    {
        int temp=0;
        if(pal(l,i,s)==0)
        continue;
        else
        temp+=1+solve(l,i,s)+solve(i+1,r,s);
        
        minn=min(minn,temp);
    }
    return dp[l][r]=minn;
}

int Solution::minCut(string A) {

    memset(dp,-1,sizeof(dp));
    return solve(0,A.size()-1,A); 
}
