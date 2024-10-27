class Solution {
    public boolean findTriplet(int[] arr) {
        Arrays.sort(arr);
        for(int i=2;i<arr.length;i++){
            int j=0;
            int k=i-1;
            while(j<k){
                if(arr[k]+arr[j]==arr[i])
                return true;
                else if(arr[k]+arr[j]<arr[i])
                j++;
                else
                k--;
            }
        }
        return false;
    }
}
