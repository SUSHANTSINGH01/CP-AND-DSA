class Solution{
public:
    bool solve(int arr[],int n,int sum)
    {
        if(sum==0) 
        return 1;
            
        if(n==0 && sum!=0) 
        return 0;
        
        if(arr[n]>sum) 
        return solve(arr,n-1,sum);
        
        return solve(arr,n-1,sum) || solve(arr,n-1,sum-arr[n]);
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        
        for(int i=0;i<N;i++) 
        sum+=arr[i];
        
        if(sum%2!=0) 
        return 0;
        
        if(solve(arr,N-1,sum/2)) 
        return 1;
        
        return 0;
    }
};
