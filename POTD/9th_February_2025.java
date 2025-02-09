class Solution {
    // Function to return maximum path sum from any node in a tree.
    int maxx=Integer.MIN_VALUE;
    
    int solve(Node node){
        if(node==null){
            return 0;
        }
        
        int l=Math.max(0,solve(node.left));
        int r=Math.max(0,solve(node.right));
        
        maxx=Math.max(maxx,node.data+l+r);
        
        return node.data+Math.max(l,r);
    }
    int findMaxSum(Node node) {
        // your code goes here
        solve(node);
        return maxx;
    }
}
