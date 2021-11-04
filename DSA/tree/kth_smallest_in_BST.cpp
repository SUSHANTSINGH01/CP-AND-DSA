// greedy 

class Solution {
  public:
    // Return the Kth smallest element in the given BST
    vector<int>ans;
    void solve(struct Node *root)
    {
        if(root==0)
        return ;
        
        ans.push_back(root->data);
        solve(root->left);
        solve(root->right);
    }
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        
        solve(root);
       sort(ans.begin(),ans.end());
       int n=ans.size();
      
       if(K<=n)
       return ans[K-1];
       else
       return -1;
    }
};


// optimized (space)

class Solution {
  public:
    // Return the Kth smallest element in the given BST
    
    int c=1;
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        if(root==0)
        return -1;
        int ans=-1;
        ans=KthSmallestElement(root->left,K);
        if(K==c)
        ans=root->data;
        c++;
        if(ans==-1)
        ans=KthSmallestElement(root->right,K);
        return ans;
        
    }
};
