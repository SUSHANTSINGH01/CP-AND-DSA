class Solution {
    int ind=0;
    
    void secondInOrder(List<Integer>list, Node root){
        if(root==null)
        return ;
        
        secondInOrder(list,root.left);
        if(root.data!=list.get(ind)){
            root.data=list.get(ind);
        }
        ind++;
        secondInOrder(list,root.right);
        
        return;
    }
    void inOrder(List<Integer>list, Node root){
        if(root==null)
        return ;
        inOrder(list,root.left);
        list.add(root.data);
        inOrder(list,root.right);
    }
    void correctBST(Node root) {
        // code here.
        List<Integer> list = new ArrayList<>();
        inOrder(list,root);
        Collections.sort(list);
        secondInOrder(list,root);
    }
}
