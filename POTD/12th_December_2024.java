class Solution {
    int countFreq(int[] arr, int target) {
        // code here
        
        int res=0;
        for(int i=0;i<arr.length;i++)
        if(arr[i]==target)
        res++;
        return res;
    }
}
