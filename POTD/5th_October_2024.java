class Solution {
    public long findSmallest(int[] arr) {
        // Your code goes here
        
        int res=1;
        for(int ele:arr){
            if(ele>res) 
            return res;
            res+=ele;
        }
        return res;
    }
}
