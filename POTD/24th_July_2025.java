class Solution {
    public int getLastMoment(int n, int left[], int right[]) {
        // code here
        
        int res = 0;
        
        for(int i=0;i<left.length;i++)
        res = Math.max(left[i],res);
        
        for(int i=0;i<right.length;i++)
        res = Math.max(n-right[i],res);
        
        return res;
    }
}
