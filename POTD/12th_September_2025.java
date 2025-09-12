class Solution {
    public int getMinDiff(int[] arr, int k) {
        // code here
        int n=arr.length;
        Arrays.sort(arr);
        int minn=arr[0]+k;
        int maxx=arr[n-1]-k;
        int res=Math.abs(arr[n-1]-arr[0]);
        int tempMinn=0;
        int tempMaxx=0;
        n--;
        
        for(int i=0;i<n;i++){
            tempMaxx=Math.max(maxx,arr[i]+k);
            tempMinn=Math.min(minn,arr[i+1]-k);
            if(tempMinn<0){
                continue;
            }
            res=Math.min(res,Math.abs(tempMaxx-tempMinn));
        }
        
        return res;
    }
}
