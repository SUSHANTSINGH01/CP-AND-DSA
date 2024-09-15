class Solution {
  public:
   
    Node *dfs(Node *root, Node* &res){
        
        if(root==NULL)
        return NULL;
        
        Node *left = NULL;

        if(root!=NULL)
        left = dfs(root->left,res);
        
        Node * new_root=new Node(root->data);
        
        if(left!=NULL)
        left->right = new_root;
    
        if(res!=NULL){
            Node * temp = res;
            res->right = new_root;
            res=res->right;
            
            res->left=temp;
        }
        else
        res=new_root;
        
        if(root!=NULL)
        dfs(root->right,res);
        
        return NULL;
        
    }
    Node* bToDLL(Node* root) {
        // code here
        
        Node * res=NULL;
        dfs(root,res);
        while(res->left!=NULL){
            res=res->left;
        }
        return res;
        
    }
};
