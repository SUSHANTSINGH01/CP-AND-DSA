int Solution::numDistinct(string A, string B) 
{
    int c=A.size();
    int r=B.size();
    
    if(r>c)
    return 0;
    
    vector<vector<int>>temp(r+1, vector<int>(c+1, 0));
    
    for(int i=0; i<=c; i++)
    temp[0][i]=1;
    
    
    for(int i=1; i<=r; i++)
    {
        for(int j=i; j<=c; j++)
        {
            if(A[j-1]==B[i-1])
            temp[i][j]=temp[i-1][j-1]+temp[i][j-1];
            
            else
            temp[i][j]=temp[i][j-1];
        }
    }
    
    return temp[r][c];

}
