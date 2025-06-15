class Solution {
    boolean isPos(int mid, int[] arr, int k){
        
        int c=0;
        
        for(int i=0;i<arr.length;i++){
            int temp=(arr[i]/mid);
            c+=temp;
            if(temp*mid<arr[i])
            c++;
        }
        
        return c<=k;
    }
    int smallestDivisor(int[] arr, int k) {
        // Code here
        int l=1;
        int r=1000006;
        
        while(l<r){
            
            int mid=(l+r)/2;
            
            if(isPos(mid,arr,k))
            r=mid;
            else
            l=mid+1;
        }
        
        return l;
    }
}
