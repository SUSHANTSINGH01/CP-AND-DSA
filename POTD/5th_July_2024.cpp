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
