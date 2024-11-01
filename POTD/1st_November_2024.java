class Solution {
    public long maxSum(Long[] arr) {
        // code here
        int n=arr.length;
        long res=0;
        int l=0;
        int r=n-1;
        Arrays.sort(arr);
        while(l<r){
            res+=Math.abs(arr[r]-arr[l]);
            l++;
            r--;
        }
        return res*2;
    }
}
