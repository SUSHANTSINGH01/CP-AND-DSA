class Solution {
    boolean solve(Node root1, Node root2){
        if(root1==null && root2==null)
        return true;
        
        if(root1==null || root2==null)
        return false;
        
        return (root1.data == root2.data)
               && solve(root1.left,root2.right)
               && solve(root1.right, root2.left);

    }
    public boolean isSymmetric(Node root) {
        // Code here
        return solve(root.left, root.right);
    }
}
