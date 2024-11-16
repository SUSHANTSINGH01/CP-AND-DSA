class Solution {
    void pushZerosToEnd(int[] arr) {
        // code here
        
        int k=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=0)
            arr[k++]=arr[i];
        }
        for(;k<arr.length;k++)
        arr[k]=0;
        
    }
}
