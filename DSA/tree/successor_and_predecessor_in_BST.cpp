

// Optimized SOlution


void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root) 
    return;
    findPreSuc(root->left , pre, suc, key);
    if(root->key<key)         
    pre = root;
    if(root->key>key && !suc) 
    suc = root;
    findPreSuc(root->right, pre, suc, key);
}


// Second Solution


class Solution
{
    public:
    int minn=INT_MIN;
    int maxx=INT_MAX;
    void findPredAndSucc(Node *root, Node* &pre, Node* &suc, int key){
        if(root==NULL)
        return;
        
        if(root->key<key){
            if(minn<root->key){
                minn=root->key;
                pre=root;
            }
        }
        if(root->key>key){
            if(maxx>root->key){
                suc=root;
                maxx=root->key;
            }
        }
        
        if(root->left)
        findPredAndSucc(root->left,pre,suc,key);
        if(root->right)
        findPredAndSucc(root->right,pre,suc,key);
    }
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        findPredAndSucc(root,pre,suc,key);
        
    }
};
