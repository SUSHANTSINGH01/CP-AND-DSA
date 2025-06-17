class Solution {
    private int upperBound(int[] arr,int minn,int maxx,int target) {
        while(minn<=maxx) {
            int mid=(minn+maxx)/2;
            if(arr[mid]<=target) {
                minn=mid+1;
            }else{
                maxx=mid-1;
            }
        }
        return minn;
    }
    public int minimumCoins(int[] arr, int k) {
        // code here
        int n=arr.length;
        int minCoins=Integer.MAX_VALUE;
        Arrays.sort(arr);

        int[] prefix=new int[n];
        prefix[0]=arr[0];
        
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }

        for(int i=0;i<n;i++){
            
            int limit=arr[i]+k;
            int pos=upperBound(arr,i,n-1,limit);

            int leftSum=(i>0)?prefix[i-1]:0;
            int rightSum=(pos<n)?prefix[n-1]-prefix[pos-1]:0;
            int allowedSum=(n-pos)*limit;

            int coins=leftSum+rightSum-allowedSum;
            minCoins=Math.min(minCoins,coins);
        }

        return minCoins;
    }
}
