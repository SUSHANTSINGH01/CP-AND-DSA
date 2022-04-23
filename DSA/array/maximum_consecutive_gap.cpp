int Solution::maximumGap(const vector<int> &A) 
{
    int n=A.size();
    if(n<2)
    return 0;
    
    
    vector<int>minn(n, -1);
    vector<int>maxx(n, -1);
    
    int max_dist=0;
    int gap=0;
    int pos=0;
    int temp=0;
    int minn_temp=INT_MAX;
    int maxx_temp=INT_MIN;
    
    
    for(int i=0; i<n; i++)
    {
        if(A[i]<minn_temp)
        minn_temp=A[i];
        
        if(A[i]>maxx_temp)
        maxx_temp=A[i];
    }
    
    gap=maxx_temp-minn_temp;
    gap=gap/(n-1);
    
    if(gap==0)
    return maxx_temp-minn_temp;
    
    
    for(int i=0; i<n; i++)
    {
        temp=(int)((A[i]-minn_temp)/gap);
        if(minn[temp]<0)
        {
            minn[temp]=A[i];
            maxx[temp]=A[i];
        }
        else
        {
            minn[temp]=min(A[i], minn[temp]);
            maxx[temp]=max(A[i], maxx[temp]);
        }
    }
    
    int max_diff=0;
    
    for(int i=0; i<minn.size(); i++)
    {
        if(minn[i]>=0)
        {
            max_diff=max(max_diff, minn[i]-maxx[pos]);
            pos=i;
        }    
    }
    return max_diff;
}
