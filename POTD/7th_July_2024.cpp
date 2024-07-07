

// Cpp Solution


class Solution {
  public:
    // Function should return all the ancestor of the target node
    void solve(Node *root, int target, vector<int>&res, bool &f){
        
        if(!root)
        return ;
        
        if(root->data==target){
            f=true;
            return ;
        }
        
        if(!f)
        solve(root->left,target,res,f);
        
        if(!f)
        solve(root->right,target,res,f);
        
        if(f)
        res.push_back(root->data);
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int>res;
        bool f=0;
        solve(root,target,res,f);
        return res;
    }
};


// Java Solution


class Solution {
    static class BooleanWrapper {
        boolean flag;
        BooleanWrapper(boolean flag) {
            this.flag = flag;
        }
    }
    public void solve(Node root, int target, ArrayList<Integer>res, BooleanWrapper f){
        
        if(root==null)
        return ;
        
        if(root.data==target){
            f.flag=true;
            return ;
        }
        
        if(!f.flag)
        solve(root.left,target,res,f);
        
        if(!f.flag)
        solve(root.right,target,res,f);
        
        if(f.flag)
        res.add(root.data);
    }
    public ArrayList<Integer> Ancestors(Node root, int target) {
        // add your code here
        ArrayList<Integer>res = new ArrayList<>();
        BooleanWrapper f=new BooleanWrapper(false);
        solve(root,target,res,f);
        return res;
    }  
}
