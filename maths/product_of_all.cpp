vector<int> Solution::solve(vector<int> &A) 
{
        int n=A.size();
        vector<int>res(n,0);
        long long int prefix=1;
        long long int postfix=1;
        int md=1000000007;
        for(int i=0;i<n;i++)
        {
            res[i]=prefix;
            prefix=(prefix*A[i])%md;
        }
        for(int i=n-1;i>=0;i--)
        {
            res[i]=(res[i]*postfix)%md;
            postfix=(postfix*A[i])%md;
        }
        return res;
}
