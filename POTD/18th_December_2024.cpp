class Solution {
  public:
    bool is_pos(vector<int>&a, int n, int k, int mid)
    {
        int sum=0;
        int c=1;
        for(int i=0;i<n;i++)
        {
            if((sum+a[i])>mid)
            {
                c++;
                sum=a[i];
            }
            else
            sum+=a[i];
        } 
        return (c<=k);
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(n<k)
        return -1;
        int total=0;
        int maxx=0;
        for(int i=0;i<n;i++)
        {
            total+=arr[i];
            maxx=max(maxx,arr[i]);
        } 
        int l=maxx;
        int r=total;
        int res=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(is_pos(arr,n,k,mid))
            {
                res=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        } 
        return res;
    }
};
