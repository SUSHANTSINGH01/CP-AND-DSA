class Solution {
    Node LCA(Node root, Node n1, Node n2) {
        // your code here.
        if(root==null)
        return null;
        
        //System.out.println("root data is " + root.data);
        
        if(root==n1 || root==n2)
        return root;
        
        Node leftLCA=LCA(root.left,n1,n2);
        Node rightLCA=LCA(root.right,n1,n2);
        
        if(leftLCA!=null && rightLCA!=null)
        return root;
        
        if(leftLCA==null)
        return rightLCA;
        
        return leftLCA;
    }
}
