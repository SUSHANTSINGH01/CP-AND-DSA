class Solution {
    public int getMinDiff(int k, int[] arr) {
        // code here
        
        int n=arr.length;
        Arrays.sort(arr);
 
        int res=arr[n-1]-arr[0];

        for(int i=1;i<n;i++){
            int maxx=Math.max(arr[i-1]+k,arr[n-1]-k);
            int minn=Math.min(arr[0]+k,arr[i]-k);
            res=Math.min(maxx-minn,res);
        }
        
        return res;
    }
}
