class Solution {
    public ArrayList<ArrayList<Integer>> levelOrder(Node root) {
        // Your code here
        
        ArrayList<ArrayList<Integer>> res = new ArrayList<>();
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        
        while(!q.isEmpty()){
            int n=q.size();
            ArrayList<Integer> tempRes = new ArrayList<>();
            while(n!=0){
                Node temp=q.poll();
                tempRes.add(temp.data);
                if(temp.left!=null)
                q.add(temp.left);
                if(temp.right!=null)
                q.add(temp.right);
                n--;
            }
            res.add(tempRes);
        }
        return res;
    }
}
