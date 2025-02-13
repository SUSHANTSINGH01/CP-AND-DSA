class Solution {
    Map<Integer,Integer> mp = new HashMap<>();
    boolean solve(Node root, int target){
        if(root==null)
        return false;
        
        int temp = target-root.data;
        if(mp.containsKey(temp))
        return true;
        
        mp.put(root.data,mp.getOrDefault(root.data,0)+1);
        
        return solve(root.left,target) || solve(root.right,target);
        
    }
    boolean findTarget(Node root, int target) {
        // Write your code here
        
        return solve(root, target);
    }
}
