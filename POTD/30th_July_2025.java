class Solution {
    public int cntSubarrays(int[] arr, int k) {
        // code here
        Map<Integer, Integer> mp = new HashMap<>();
        mp.put(0,1);
        int sum=0;
        int n=arr.length;
        int res = 0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.containsKey(sum-k)){
                res+=mp.get(sum-k);
            }
            mp.put(sum, mp.getOrDefault(sum,0)+1);
        }
        return res;
    }
}
