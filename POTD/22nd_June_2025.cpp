class Solution {
    public ArrayList<Integer> largestSubset(int[] arr) {
        // code here
        int n=arr.length;
        
        ArrayList<Integer>res=new ArrayList<>();
         
        Arrays.sort(arr);
        
        int[] dp=new int[n];
        Arrays.fill(dp,1);
        
        int[] next=new int[n];
        Arrays.fill(next,-1);
        
        int l=0;
        int r=n-1;
        
        while(l<r){
            int temp=arr[l];
            arr[l++]=arr[r];
            arr[r--]=temp;
        }
        
        int length=1;
        int ind=0;
        
        for(int i=1;i<n;i++){
            for (int j=0;j<i;j++) {

                if(arr[j]%arr[i]==0 && dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    next[i]=j;
                }

            }

            if(dp[i]>length){

                length=dp[i];
                ind=i;

            }
        }
        

        for (int i=ind;i>=0;i=next[i]) {
            res.add(arr[i]);
            if(next[i]==-1)
            break;
        }
        
        return res;
    }
}
