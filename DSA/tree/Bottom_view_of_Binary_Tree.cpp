

// optimized solution


class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        
        if(root==NULL) 
        return {};
    
        vector<int>res(200005,INT_MAX);
        int point = 200005;
        queue<pair<Node*, int>>q;      
        q.push({root, 0});             
        
        while(!q.empty()) {
            
            auto currentRoot=q.front();
            q.pop();
            Node* node= currentRoot.first;
            int verticalPoint=currentRoot.second;
            
            if(verticalPoint>=0)
            res[verticalPoint]=node->data;
            else
            res[point+verticalPoint]=node->data;
            
            if(node->left) 
            q.push({node->left,verticalPoint-1});
            
            if(node->right) 
            q.push({node->right,verticalPoint+1});
        }
        
        vector<int>finalRes;
        point--;
        while(res[point]!=INT_MAX){
            finalRes.push_back(res[point--]);
        }
        
        int i=0;
        reverse(finalRes.begin(),finalRes.end());
        
        while(res[i]!=INT_MAX){
            finalRes.push_back(res[i++]);
        }
        
        
        return finalRes;
    }
};


// Second Solution


class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        vector<int>res;
        
        if(!root)
        return res;
        
        q.push({root,0});
        while(!q.empty())
        {
            Node* temp=q.front().first;
            int l=q.front().second;
            mp[l]=temp->data; 
            if(temp->left)
            q.push({temp->left,l-1});
            if(temp->right)
            q.push({temp->right,l+1});
            q.pop();
        }
        for(auto it:mp)
        res.push_back(it.second);
    }
};
