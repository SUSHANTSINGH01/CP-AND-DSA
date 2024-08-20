class Solution {
  public:
  
    int res=0;
    pair<int,bool>dfs(Node* root,int target)
    {
        
        if(!root) 
        return {0,false};
    
        pair<int,bool>left=dfs(root->left,target);
        pair<int,bool>right=dfs(root->right,target);
        
        if(root->data==target)
        {
           res=max({res,left.first,right.first});
           return {1,true};
        }
        if(left.second==true)
        {
            res=max(res,left.first+right.first);
            left.first++;
            return left;
        }
        else if(right.second==true)
        {
            res=max(res,left.first+right.first);
            right.first++;
            return right;
        }
        return {max(left.first,right.first)+1,false};
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        dfs(root,target);
        return res;
    }
};
