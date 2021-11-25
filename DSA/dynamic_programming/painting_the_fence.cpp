class Solution{
    public:
    long long countWays(int n, int k){
        // code here
        if(n==1)
        return k;
        
        
        int md=1e9+7;
        
        
        long long int a=k;
        long long int b=k*(k-1);
        long long int c=a+b;
        
        
        for(int i=3;i<=n;i++)
        {
            a=b;
            b=(c*(k-1))%md;
            c=(a+b)%md;
            b%=md;
        }
        
        return c%md;
    }
};
