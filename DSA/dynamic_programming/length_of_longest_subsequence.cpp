int Solution::longestSubsequenceLength(const vector<int> &A) {
        int n=A.size();
        int arr1[n];
        int arr2[n];
        int res=0;
        
        for(int i=0;i<n;i++)
        {
            arr1[i]=1;
            arr2[i]=1;
        }
        
        for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
        if(A[i]>A[j] && arr1[i]<arr1[j]+1)
        arr1[i]=arr1[j]+1;
            
        
        for(int i=n-2;i>=0;i--)
        for(int j=n-1;j>i;j--)
        if(A[i]>A[j] && arr2[i]<arr2[j]+1)
        arr2[i]=arr2[j]+1;
           
          
        for(int i=0;i<n;i++)
        res=max(res,arr1[i]+arr2[i]-1);
        return res;
}
