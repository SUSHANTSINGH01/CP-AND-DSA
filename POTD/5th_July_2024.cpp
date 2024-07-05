class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
   
    
    int verticalWidth(Node* root) {
        // code here
        if(root==NULL) 
        return 0;
    
        unordered_map<int, int>mp;  
        queue<pair<Node*, int>>q;      
        q.push({root, 0});             
        
        while(!q.empty()) {
            
            auto currentRoot=q.front();
            q.pop();
            Node* node= currentRoot.first;
            int verticalPoint=currentRoot.second;
            
            mp[verticalPoint]++;
            
            if(node->left) 
            q.push({node->left,verticalPoint-1});
            
            if(node->right) 
            q.push({node->right,verticalPoint+1});
        }
        
        return mp.size();
    }
};


// Java Solution


class Solution {
    // Function to find the vertical width of a Binary Tree.
    class NodeLevelPair {
        Node node;
        int level;

        NodeLevelPair(Node node, int level) {
            this.node = node;
            this.level = level;
        }
    }
    public int verticalWidth(Node root) {
        // code here.
        
        if(root==null)
        return 0;
        
        Map<Integer,Integer> mp = new HashMap<>();
        Queue<NodeLevelPair>q = new LinkedList<>();
        q.add(new NodeLevelPair(root,0));
        
        while(!q.isEmpty()){
            
            NodeLevelPair temp = q.poll();
            Node node = temp.node;
            int verticalPoint = temp.level;
            
            mp.put(verticalPoint,mp.getOrDefault(verticalPoint,0)+1);
            
            if(node.left!=null){
                q.add(new NodeLevelPair(node.left,verticalPoint-1));
            }
            
            if(node.right!=null){
                q.add(new NodeLevelPair(node.right,verticalPoint+1));
            }
        }
        
        return mp.size();
    }
}
