int Solution::maxProfit(const vector<int> &A) 
{
    int n=A.size();
    if(n==0)
    return 0;
    vector<int>minn(n+1,0);
    minn[0]=A[0];
    int res=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        minn[i]=min(minn[i-1],A[i-1]);
        if(abs(minn[i]-A[i-1])>res)
        res=abs(minn[i-1]-A[i-1]);

    }
    return res;
}
