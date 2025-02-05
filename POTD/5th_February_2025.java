class Solution {
    // Function to convert a binary tree into its mirror tree.
    
    void swap(Node node){
        Node temp=node.left;
        node.left=node.right;
        node.right=temp;
    }
    void mirror(Node node) {
        // Your code here
        if(node==null)
        return ;
    
        //if(node.right!=null && node.left!=null)
        swap(node);
        mirror(node.left);
        mirror(node.right);
       
    }
}
