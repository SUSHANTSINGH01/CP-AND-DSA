class Solution {

    // Function to find maximum circular subarray sum.
    public int circularSubarraySum(int arr[]) {
        // Your code here
        int res=0;
        int n=arr.length;
        int curr_maxx=0; 
        int maxx=0; 
        int curr_minn=0; 
        int minn=0; 
        for(int i=0;i<n;i++){
            curr_minn=Math.min(arr[i],curr_minn+arr[i]);
            minn=Math.min(minn,curr_minn);
            curr_maxx=Math.max(arr[i],curr_maxx+arr[i]);
            maxx=Math.max(maxx,curr_maxx);
            res+=arr[i];
        }
        return Math.max(maxx,res-minn);
        
    }
}
