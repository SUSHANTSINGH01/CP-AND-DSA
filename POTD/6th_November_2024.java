class Solution {
    
    static int dfs(Node root,int val){
        if(root==null)
        return 0;
        
        val=val*10+root.data;
        
        if(root.left==null && root.right==null)
        return val;
        
        return dfs(root.left,val)+dfs(root.right,val);
    }
    public static int treePathsSum(Node root) {
        // add code here.
        return dfs(root,0);
    }
}
