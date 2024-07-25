class Solution {
  public:
    
    Node *formBST(vector<int> &nums,int l, int r){
        if(l>r)
        return NULL;
        
        int mid=(l+r)/2;
        
        Node *root=new Node(nums[mid]);
        root->left=formBST(nums,l,mid-1);
        root->right=formBST(nums,mid+1,r);
        return root;
    }
    
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        int n=nums.size();
        return formBST(nums,0,n-1);
    }
};
