
string Solution::solve(string A) 
{
    int i;
    int n=A.size();
    for(i=n-2;i>=0;i--)
    if((A[i]-'0')<(A[i+1]-'0'))
    break;
    
    if(i==-1)
    return "-1";
    int j=n-1;
    for(j;j>i;j--)
    if((A[j]-'0')>(A[i]-'0'))
    break;
    
    swap(A[j],A[i]);
    reverse(A.begin()+i+1, A.end());
    return A;
}
