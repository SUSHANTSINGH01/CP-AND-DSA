class Solution {
    int cntCoprime(int[] arr) {
        // code here
        int maxx = 0;
        int n = arr.length;
        
        for(int i=0;i<n;i++)
        maxx = Math.max(maxx,arr[i]);
        
        int[] freq = new int[maxx+1];
        Arrays.fill(freq, 0);
        
        for(int i=0;i<n;i++)
        freq[arr[i]]++;
        
        int[] dFreq = new int[maxx+1];
        Arrays.fill(dFreq, 0);
        
        for(int i=1;i<=maxx;i++)
        for(int j=i;j<=maxx;j+=i)
        dFreq[i] += freq[j];
        
        int[] dp = new int[maxx+1];
        Arrays.fill(dp, 0);
        
        for(int i=maxx;i>=1;i--){
            dp[i] = (dFreq[i]*(dFreq[i]-1))/2;
            for(int j=2*i;j<=maxx;j+=i)
            dp[i]-=dp[j];
        }
        
        return dp[1];
        
    }
}
