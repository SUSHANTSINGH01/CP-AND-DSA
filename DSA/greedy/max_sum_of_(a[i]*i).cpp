class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<0 && k>0)
            {
                a[i]=-a[i];
                k--;
            }
        }
        long long int sum=0;
        for(int i=0;i<n;i++)
        sum+=a[i];
        
         int minn=*min_element(a,a+n);
        
        if(k%2==1)
        sum-=2*minn;
        
        return sum;
        
    }
};
