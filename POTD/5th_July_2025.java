class Solution {
    public int maxSum(int arr[]) {
        // code here
        
        int res = 0;
        int n = arr.length;
        
        for(int i=0;i<n-1;i++){
            res=Math.max(res,arr[i]+arr[i+1]);
        }
        
        return res;
        
    }
}
