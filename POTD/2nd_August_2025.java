class Solution {
    public int longestSubarray(int[] arr, int k) {
        // Code Here
        int preSum = 0;
        int n = arr.length;
        int maxxLength = 0;
        Map<Integer, Integer> mp = new HashMap<>();
        mp.put(0,-1);
        
        for(int i=0;i<n;i++){
            preSum += (arr[i]>k) ? 1:-1;
            
            if(preSum > 0){
                maxxLength = i+1;
            }
            if(mp.containsKey(preSum-1)){
                maxxLength = Math.max(maxxLength,i-mp.get(preSum-1));
            }
            if(!mp.containsKey(preSum)){
                mp.put(preSum,i);
            }
        }
        
        return maxxLength;
    }
}
