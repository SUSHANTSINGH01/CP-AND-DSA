class Codec {
public:
     TreeNode* postOrder(string &data, int &i)
     {
        if(i >= data.size()) 
        return 0;
        int st = i;
        while(i<data.size() && data.at(i)!=',')
        i++;
        
        if(data.substr(st,i-st)=="#") 
        return 0;
        
        TreeNode* root = new TreeNode(stoi(data.substr(st, i-st)));
        root->left = postOrder(data,++i); 
        root->right = postOrder(data,++i);
        return root;
    }
    
    string serialize(TreeNode* root) {
        if(!root) 
        return "#"; 
        return to_string(root->val) + "," + serialize(root->left) +  "," + serialize(root->right);
    }

   
    TreeNode* deserialize(string data) {
        int i=0;
        return postOrder(data,i);
    }
    
   
};
