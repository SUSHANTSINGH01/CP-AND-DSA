class Solution {
    // Return the Kth smallest element in the given BST
    int c=0;
    int res=-1;
    public int solve(Node root, int k){
        if(root==null)
        return res;
        
        if(root.left!=null)
        solve(root.left,k);
    
        c++;
       
        if(c==k && res==-1)
        res=root.data;

        if(root.right!=null)
        solve(root.right,k);
        
        return res;
       
    }
    public int kthSmallest(Node root, int k) {
        // Write your code here
        return solve(root,k);
    }
}
