int Solution::solve(string A) 
{
    int n=A.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i'|| A[i]=='u' || A[i]=='o')
        ans=((ans%10003)+(n-i))%10003;
    }
    return ans%10003;
}
