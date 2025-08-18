class Solution {
    
    boolean isPos(int mid, int[] arr){
        int c=0;
        
        for(int i=0;i<arr.length;i++)
        if(mid<=arr[i])
        c++;
        
        return c>=mid;
    }
    public int hIndex(int[] citations) {
        // code here
        
        int n=citations.length;

        int l=0;
        int r=n;
        int res=0;
        
        while(l<=r){
            
            int mid = (l+r)/2;
            
            if(isPos(mid,citations)){
                l=mid+1;
                res=mid;
            }
            
            else
            r=mid-1;
        }
        
        return res;
    }
}
