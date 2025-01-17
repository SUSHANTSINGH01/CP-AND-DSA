class Solution {
    public static int[] productExceptSelf(int arr[]) {
        // code here
        
        int n=arr.length;
        int[] res= new int[n];
        int maxx=1;
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0)
            maxx*=arr[i];
            else
            c++;
        }
        for(int i=0;i<n;i++){
            if(c==1 && arr[i]==0)
            res[i]=maxx;
            else if(c==0)
            res[i]=maxx/arr[i];
            else
            res[i]=0;
        }
        return res;
    }
}
