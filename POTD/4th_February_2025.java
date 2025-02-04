class Solution {
    int res=0;
    int solve(Node root){
        
        if(root==null)
        return 0;
        
        int left = solve(root.left);
        int right = solve(root.right);
        
        res = Math.max(res,left+right);
        
        return 1 + Math.max(left,right);
    }
    int diameter(Node root) {
        // Your code here
        
        if(root==null)
        return 0;
        solve(root);
        return res;
    }
}
