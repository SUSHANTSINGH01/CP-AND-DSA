int fact(int n,int mod)
{
        if(n==0) 
        return 1; 
        else 
        return (n*fact(n-1,mod)) %mod;
}
int Solution::findRank(string A) 
{
    string s=A;
    int ans =0;
    int mod=1000003;
    int n=s.length();
    for(int i=0;i<n-1;i++)
    {
        int c=0;
        for(int j=i+1;j<n;j++)
        {
            if(s[j]<s[i])
            c++;
        }   
        ans+=( (c*fact(n-i-1,mod)) )%mod;
    }
    return (ans+1 )%mod;
}
