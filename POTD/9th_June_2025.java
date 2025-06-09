class Solution {
    public boolean solve(Node root, Node l, Node r){
        if(root==null)
        return false;
        
        if(r!=null && root.data==1 && r.data==2)
        return true;
        
        if(l!=null && r!=null && (root.data-1)==l.data && (root.data+1)==r.data)
        return true;
        
        return solve(root.left,l,root) || solve(root.right,root,r);
    }
    public boolean isDeadEnd(Node root) {
        // Code here.
        return solve(root, null, null);
    }
}
