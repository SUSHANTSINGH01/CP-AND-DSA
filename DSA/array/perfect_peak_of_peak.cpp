int Solution::perfectPeak(vector<int> &A) 
{
    int n=A.size();
    vector<int>pre(n);
    vector<int>post(n);
    int maxx=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        maxx=max(maxx,A[i]);
        pre[i]=maxx;
    }

    int minn=INT_MAX;

    for(int i=n-1;i>=0;i--)
    {
        minn=min(minn,A[i]);
        post[i]=minn;
    }


    for(int i=1;i<n-1;i++)
    if(pre[i]==post[i] && pre[i-1]<pre[i] && post[i+1]>post[i])
    return 1;

    return 0;
}
