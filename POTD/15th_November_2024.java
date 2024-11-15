class Solution {
    public int getSecondLargest(int[] arr) {
        // Code Here
        
        Arrays.sort(arr);
        int res=0;
        int i=arr.length-1;
        while(i>0 && arr[i]==arr[i-1]){
            i--;
        }
        if(i<=0)
        return -1;
        return arr[i-1];
    }
}
