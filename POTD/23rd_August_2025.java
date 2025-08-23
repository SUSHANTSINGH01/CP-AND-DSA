class Solution {
    
    boolean isPos(int[] arr,int mid,int k)
    {
        int n=arr.length;
        int count=1;
        int sum=0;
       
        for(int i=0;i<n;i++){
            if((arr[i]+sum)>mid){
                count++;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        } 
        
        return count<=k;
    }
    public int findPages(int[] arr, int k) {
        // code here
        int n=arr.length;
        int res=0;
        int sum=0;
        int maxx=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxx=Math.max(maxx,arr[i]);
        } 
        
        if(n<k){
            return -1;
        }
        
        int l=maxx;
        int r=sum;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(isPos(arr,mid,k)){
                r=mid-1;
                res=mid;
               
            }
            else{
                l=mid+1;
            }
        } 
        
        return res;
        
    }
}
