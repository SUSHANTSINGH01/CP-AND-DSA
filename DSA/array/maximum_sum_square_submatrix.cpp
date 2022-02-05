int Solution::solve(vector<vector<int> > &A, int B) 
{
    int n=A.size();
    int m=A[0].size();
    int maxx=INT_MIN;
    int res=INT_MIN;
    for(int i=0;i<=n-B;i++)
    {
        int temp[A.size()]={0};
        
        for(int j=0;j<n;j++)
        for(int k=0;k<B;k++)
        temp[j]+=A[j][i+k];

        int sum=0;
        maxx=0;
        for(int j=0;j<n;j++)
        {
            if(j<B)
            {
                sum+=temp[j];
                maxx=sum;
            }
            else
            {
                int temp_maxx=sum+temp[j]-temp[j-B];
                maxx=max(maxx,temp_maxx);
                sum=temp_maxx;
            }
        }
        res=max(res,maxx);
    }
    return res;
}
