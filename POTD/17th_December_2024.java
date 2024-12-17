class Solution {
    private static boolean checkPos(int[] stalls, int dist, int c, int n) {
        int cnt=1;
        int last=stalls[0]; 
        for(int i=1;i<n;i++) {
            if(stalls[i]-last>=dist) {
                cnt++;
                last=stalls[i];
            }
            if(cnt>=c) 
            return true;
        }
        return false;
    }
    public static int aggressiveCows(int[] stalls, int k) {
        // code here
        int n=stalls.length;
        Arrays.sort(stalls);
        int l=1;
        int r=stalls[n-1]-stalls[0];
        while(l<=r){
            int mid=(l+r)/2;
            if(checkPos(stalls,mid,k,n)==true) 
            l=mid+1;
            else 
            r=mid-1;
        }
        return r;
    }
}
