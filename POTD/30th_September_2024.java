class Solution {

    void solve(Node root,List<Integer>res)
    {
        if(root==null)
        return;
        
        res.add(root.data);
        solve(root.left,res);
        solve(root.right,res);
    }
    
    public List<Integer> merge(Node root1, Node root2) {
        // Write your code here
        List<Integer>res=new ArrayList<>();
        solve(root1,res);
        solve(root2,res);
        Collections.sort(res);
        return res;
    }
}
