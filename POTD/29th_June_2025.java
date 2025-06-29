class Solution {
    int solve(int mid, int[] arr){
        
        int c=1;
        int sum=0;
        
        for(int i=0;i<arr.length;i++){
            
            if((sum+arr[i])>mid){
                c++;
                sum=arr[i];
            }else{
                sum+=arr[i];
            }
        }
        
        return c;
        
    }
    public int splitArray(int[] arr, int k) {
        // code here
        int maxx=Integer.MIN_VALUE;
        int sum=0;
        for(int i=0;i<arr.length;i++){
            sum+=arr[i];
            maxx=Math.max(maxx,arr[i]);
        }
        
        int l=maxx;
        int r=sum;
        int mid = 0;
        
        while(l<=r){
            mid = (l+r)/2;
            int temp = solve(mid,arr);
            if(temp<=k)
            r=mid-1;
            else
            l=mid+1;
        }
        
        return l;
    }
};
