int res;
class IndNode{
    public : 
        bool isBST;
        int maxx;
        int minn;
        int sum;

    IndNode(){
        isBST=true;
        maxx=INT_MIN;
        minn=INT_MAX;
        sum=0;
    }
};
class Solution {
public:
    
    IndNode maxxSumBST(TreeNode *root){
        
        if(!root)
        return IndNode();

        IndNode indNode; 
        IndNode lNode = maxxSumBST(root->left);
        IndNode rNode = maxxSumBST(root->right);

        if(lNode.isBST==true && rNode.isBST==true && root->val>lNode.maxx && root->val<rNode.minn){
            indNode.isBST=true;
            indNode.sum=root->val+lNode.sum+rNode.sum;
            indNode.maxx=max(root->val,rNode.maxx);
            indNode.minn=min(root->val,lNode.minn);
        } 
        else{
            indNode.isBST=false;
            indNode.sum = max(lNode.sum, rNode.sum);
        }
        res=max(res,indNode.sum);
        return indNode;
    }
    int maxSumBST(TreeNode* root) {
        res=0;
        maxxSumBST(root);
        return res;
    }
};
