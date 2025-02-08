class Solution {
    
    void leftB(Node node, ArrayList<Integer> list){
        if(node==null)
        return ;
        
        if(node.left!=null){
            list.add(node.data);
            leftB(node.left,list);
        }
        else if(node.right!=null){
            list.add(node.data);
            leftB(node.right,list);
        }
    }
    
    
    void leafB(Node node, ArrayList<Integer> list){
         
        if(node==null)
        return ;
         
        if(node.left!=null)
        leafB(node.left,list);
         
        if(node.left==null & node.right==null){
            list.add(node.data); 
        }
        
        if(node.right!=null)
        leafB(node.right,list);
    }
    

    void rightB(Node node, ArrayList<Integer> list){
        if(node==null)
        return ;
        
        if(node.right!=null){
            rightB(node.right,list);
            list.add(node.data);
        }
        else if(node.left!=null){
            rightB(node.left,list);
            list.add(node.data);
        }
    }
    
    
    ArrayList<Integer> boundaryTraversal(Node node) {
        // code here
        ArrayList<Integer> list = new ArrayList<>();
        list.add(node.data);
        
        if(node.left==null && node.right==null)
        return list;
        
        leftB(node.left,list);
        leafB(node,list);
        rightB(node.right,list);
        
        return list;
    }
}
