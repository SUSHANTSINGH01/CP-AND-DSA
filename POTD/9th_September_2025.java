class Solution {
    public int assignHole(int[] mices, int[] holes) {
        // code here
        int res = Integer.MIN_VALUE;
        
        Arrays.sort(mices);
        Arrays.sort(holes);
        
        for(int i=0;i<mices.length;i++){
            res = Math.max(res, Math.abs(mices[i]-holes[i]));
        }
        
        return res;
    }
};
