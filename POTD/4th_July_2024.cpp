class Solution {
  public:
    
    string duplicate(Node *root, vector<Node *>&dup, unordered_map<string,int>& mp){
        
        if(!root)
        return "";
        
        
        string left = duplicate(root->left,dup,mp);
        string right = duplicate(root->right,dup,mp);
        string temp = left+right+to_string(root->data);
        
        mp[temp]++;
        
        if(mp[temp]==2){
            dup.push_back(root);
        }
        
        return temp;
    }
    
    vector<Node*> printAllDups(Node* root) {
        // Code here
        vector<Node *>res;
        unordered_map<string,int>mp;
        duplicate(root,res,mp);
        
        return res;
        
        
    }
};
