class Solution {
    public int subarraySum(int[] arr) {
        // code here
        int res= 0 ;
        int n=arr.length;
        for(int i=0;i<n;i++){
            res += (i+1)*(n-i)*arr[i];
        }
        
        return res;
    }
}
