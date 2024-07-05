class Solution {
public:
    unordered_map<int,int>mp;
    TreeNode *buildNewTree(vector<int>& post,int i, int j, int &ind){
        if(ind<0 || i>j)
        return NULL;

        else{
            int mid = mp[post[ind]];
            TreeNode * root = new TreeNode(post[ind--]);
            root->right = buildNewTree(post,mid+1,j,ind);
            root->left = buildNewTree(post,i,mid-1,ind);
           
            return root;
        }
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++)
        mp[inorder[i]]=i;
        int ind=inorder.size()-1;
        return buildNewTree(postorder, 0, ind, ind);
    }
};
