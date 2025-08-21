class Solution {
    
    public boolean isPos(int k, int mid, int[] arr) {
        int n=arr.length;
        int c=1;
        int prev=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-prev>= mid){
                c++;
                prev=arr[i];
            }
        }
        if(k<=c) 
        return true;
        
        return false;
    }
    
    public int maxMinDiff(int[] arr, int k) {
        // code here
        int n=arr.length;
        Arrays.sort(arr); 
        
        int l=0;
        int r=arr[n-1];
        int res=0;
        
        while(l<=r){
            
            int mid=(l+r)/2;
            if(isPos(k,mid,arr)){
                l=mid+1;
                res=mid;
            }else
            r=mid-1;
        }
        
        return res;
    }
}
