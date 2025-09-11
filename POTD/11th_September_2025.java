class Solution {
    public int minJumps(int[] arr) {
        // code here
        int n = arr.length;
        
        int maxx = 0;
        int curr = arr[0];
        int c = 1;
        int i = 1;
        
        for(;i<n;i++){
            
            if(curr==0)
            return -1;
            
            maxx = Math.max(maxx,arr[i]+i);
            
            curr--;
            
            if(curr<=0){
                curr = maxx-i;
                if(i!=n-1)
                c++;
            }
            
        }
        
        return c; 
    }
}
