class Solution {

    public static int countgroup(int arr[]) {
        // Complete the function
        long x=0;
        
        for(int ele:arr){
            x^=ele;
        }
        
        if(x!=0)
        return 0;
        
        int res=(int)(Math.pow(2,arr.length-1)-1);
        return res%(1000000007);
    }
}
