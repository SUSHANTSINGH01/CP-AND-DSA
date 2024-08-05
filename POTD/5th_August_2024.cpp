class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>res;
        map<int,int>mp;
        queue<pair<Node*,int>>pq;
       
        
        if(!root)
        return res;
        
        pq.push({root,0});
        
        while(!pq.empty())
        {
            Node* temp=pq.front().first;
            int ind=pq.front().second;
            mp[ind]=temp->data; 
            
            if(temp->left)
            pq.push({temp->left,ind-1});
            
            if(temp->right)
            pq.push({temp->right,ind+1});
            
            pq.pop();
        }
        
        for(auto it:mp)
        res.push_back(it.second);
        
        return res;
    }
};
