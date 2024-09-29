class Solution {
    int totalCount(int k, int[] arr) {
        // code here
        
        int res=0;
        int n=arr.length;
        
        for(int i=0;i<n;i++){
            res+=(arr[i]/k);
            if(arr[i]%k!=0)
            res+=1;
        }
        
        return res;
    }
}
