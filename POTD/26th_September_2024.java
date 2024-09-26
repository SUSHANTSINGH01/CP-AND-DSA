class Solution {
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    public int maxStep(int arr[]) {
        // Your code here
        int n=arr.length;
        int res=0;
        int maxx=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                res++;
            }else{
                maxx=Math.max(maxx,res);
                res=0;
            }
        }
        return Math.max(maxx,res);
    }
}
