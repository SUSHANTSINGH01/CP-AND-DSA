class Solution {
    int countPairs(int[][] mat1, int[][] mat2, int x) {
        // code here
        Map<Integer, Integer> mp = new HashMap<>();
        int n=mat1.length;
        int res=0;
        
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        mp.put(mat1[i][j],mp.getOrDefault(mat1[i][j],0)+1);
        
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        res+=mp.getOrDefault(x-mat2[i][j],0);
        
        return res;
    }
}
