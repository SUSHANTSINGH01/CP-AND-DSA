bool is_pos(vector<int>a, int n, int m, int ans)
{
    int sum=0;
    int c=1;
    for(int i=0;i<n;i++)
    {
        if((sum+a[i])>ans)
        {
            c++;
            sum=a[i];
        }
        else
        sum+=a[i];
    } 
    return (c<=m);
}
int Solution::books(vector<int> &A, int B) 
{
        int sum=0;
        int maxx=0;
        int n=A.size();
        if(B>n)
        return -1;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            maxx=max(maxx,A[i]);
        } 
        int l=maxx;
        int r=sum;
        int res=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(is_pos(A,n,B,mid))
            {
                res=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        } 
        return res;
}
