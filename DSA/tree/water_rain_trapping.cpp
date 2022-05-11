int Solution::trap(const vector<int> &A) 
{
        int n=A.size();
        vector<int>pre(n);
        vector<int>post(n);
        
        pre[0]=A[0];
        for(int i=1;i<n;i++)
        pre[i]=max(pre[i-1],A[i]);
        
        post[n-1]=A[n-1];
        for(int i=n-2;i>=0;i--)
        post[i]=max(post[i+1],A[i]);
        
        long long int res=0;
        for(int i=0;i<n;i++)
        res+=(min(pre[i],post[i])-A[i]);
        
        return res;
}
