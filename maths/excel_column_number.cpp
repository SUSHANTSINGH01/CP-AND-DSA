int Solution::titleToNumber(string A) 
{
    int n=A.size();
    int ans=0;
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        int Y=A[i]-'A'+1;
        ans=ans+pow(26,j)*Y;
        //cout<<ans<<endl;
        j--;
    }
    return ans;
}
