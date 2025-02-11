class Solution {
    // Function to check whether a Binary Tree is BST or not.
    boolean solve(int minn, int maxx, Node root){
        if(root==null){
            return true;
        }
        return minn<root.data && maxx>root.data && solve(minn,root.data,root.left) && solve(root.data,maxx,root.right);
    }
    boolean isBST(Node root) {
        // code here.
        int minn = Integer.MIN_VALUE;
        int maxx = Integer.MAX_VALUE;
        
        return solve(minn,maxx,root);
    }
}
