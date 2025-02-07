class Solution {
    // Function to return a list containing the inorder traversal of the tree.
    void solve(ArrayList<Integer> list, Node root){
        if(root==null)
        return ;
        
        solve(list,root.left);
        list.add(root.data);
        solve(list,root.right);
        
        
    }
    ArrayList<Integer> inOrder(Node root) {
        // Code
        
        ArrayList<Integer> list = new ArrayList<>();
        
        solve(list,root);
        
        return list;
    }
}
