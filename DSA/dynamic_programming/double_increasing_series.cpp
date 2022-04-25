int Solution::solve(int A, int B) 
{
   
    if(A==0 || B==0)
    return 1;
    int n=A;
    int m=B;
    int res[n+1][m+1]={0};
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            res[i][j]=0;

            else if(i==1 && j==1)
            res[i][j]=1;

           else if(i==1)
           res[i][j]=0;

           else if(j==1)
           res[i][j]=i;

           else
           {
               res[i][j]=res[i/2][j-1]+res[i-1][j];
               res[i][j]%=1000000007;
           }

        }
    }
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=m;j++)
    //     cout<<res[i][j]<<" ";

    //     cout<<endl;
    // }
    
    return res[n][m];

}
