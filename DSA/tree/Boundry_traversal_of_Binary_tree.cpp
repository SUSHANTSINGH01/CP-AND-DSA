class Solution {
public:
    void leftNode(Node *root,vector<int>&res){
       
        if(!root)
        return;
        
        if(root->left){
            res.push_back(root->data);
            leftNode(root->left,res);
        }
        else if(root->right){
            res.push_back(root->data);
            leftNode(root->right,res);
        }
        
    }
    
    void leafNode(Node *root,vector<int>&res){
        
        if(!root)
        return;
        
        leafNode(root->left,res);
        
        if(!root->left && !root->right)
        res.push_back(root->data);
        
        leafNode(root->right,res);
    }
    
    void rightNode(Node *root,vector<int>&res){
        
        if(!root)
        return;
        
        if(root->right){
            rightNode(root->right,res);
            res.push_back(root->data);
        }
        else if(root->left){
            rightNode(root->left,res);
            res.push_back(root->data);
        }
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>res;
        res.push_back(root->data);
       
        if(!root->left && !root->right)
        return res;
        
        leftNode(root->left,res);
        leafNode(root,res);
        rightNode(root->right,res);
        
        return res;
    }
};
