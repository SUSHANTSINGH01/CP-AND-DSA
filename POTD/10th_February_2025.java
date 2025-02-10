class Solution {
    int count=0;
    void dfs(Node root, ArrayList<Integer>arr, int k){
        if(root==null)
        return ;
        
        int sum=0;
        arr.add(root.data);
        
        for(int i=arr.size()-1;i>=0;i--){
            sum+=arr.get(i);
            if(sum==k)
            count++;
        }
        
        dfs(root.left,arr,k);
        dfs(root.right,arr,k);
        
        arr.remove(arr.size()-1);
        return;
    }
    public int sumK(Node root, int k) {
        // code here
        ArrayList<Integer> arr = new ArrayList<>();
        dfs(root,arr,k);
        return count;
        
    }
}
