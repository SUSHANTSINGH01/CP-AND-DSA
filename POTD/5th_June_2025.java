class Solution {

    int[] dp;
    
    int count(List<Integer>[] ls, int src, int dest){
        
        if(src==dest) 
        return 1; 
        
        if(dp[src]!=-1) 
        return dp[src]; 
        
        int res=0;
        
        for(int itr:ls[src]){
            res+=count(ls,itr,dest); 
        }

        dp[src]=res; 
        return res;
    }
    
    public int countPaths(int[][] edges, int V, int src, int dest) {
        // Code here
        List<Integer>[] ls = new ArrayList[V];
        dp = new int[V];
        int n=edges.length;
        
        for(int i=0;i<V;i++)
        ls[i]=new ArrayList<>();
        
        for(int[] edge:edges)
        ls[edge[0]].add(edge[1]);
        
        Arrays.fill(dp,-1);
        return count(ls,src,dest);

    }
}
