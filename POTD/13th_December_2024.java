class Solution {
    public int findMin(int[] arr) {
        // complete the function here
        int n=arr.length;
        int res=123456789;
        
        for(int i=0;i<n;i++)
        res=Math.min(res,arr[i]);
        
        return res;
    }
}
