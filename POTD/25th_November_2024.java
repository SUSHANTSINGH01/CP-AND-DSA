class Solution {
    // Function to find maximum product subarray
    int maxProduct(int[] arr) {
        // code here
        long maxx=arr[0];
        long minn=arr[0];
        int res=arr[0];  
        
        for(int i=1;i<arr.length;i++)
        {
            long curr_maxx=maxx*arr[i];
            long curr_minn=minn*arr[i];
            maxx=Math.max(arr[i],Math.max(curr_maxx,curr_minn));
            minn=Math.min(arr[i],Math.min(curr_maxx,curr_minn));
            
            res=Math.max(res,(int)maxx);
        } 
        return res;
    }
}
