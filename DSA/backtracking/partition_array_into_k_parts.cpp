class Solution{
  public:
   bool solve(int a[], int n, vector<int>&grps, int target)
   {
        if(n<0) 
        return 1;
        
        for(int i=0; i<grps.size(); i++)
        {
            if(grps[i]+a[n]>target) 
            continue;
            grps[i]+=a[n];
            if(solve(a, n-1, grps, target))
            return 1;
            grps[i]-=a[n];
        }
        
        return 0;
        
    }
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
        int c=0;
        for(int i=0; i<n; i++) 
        c+=a[i];
        if(c%k!=0) 
        return 0;
        c=c/k;
        vector<int>grps(k, 0);
        sort(a,a+n);
        if(a[n-1]>c) 
        return 0;
        return solve(a,n-1,grps,c);
       
    }
};
