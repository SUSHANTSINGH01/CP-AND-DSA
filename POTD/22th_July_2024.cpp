class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    vector<int>largestBST(Node* root)
    {
       if(root==NULL)
       return {1,0,INT_MAX,INT_MIN};
       
       if(root->right==NULL && root->left==NULL)
       return {1,1,root->data,root->data};
       
       vector<int>l=largestBST(root->left);
       vector<int>r=largestBST(root->right);
   
        if(l[0] && r[0])
        {
              if (root->data>l[3] && root->data<r[2])
              {
                  int x=l[2];
                  int y=r[3];
                  
                  if(x==INT_MAX)
                  x=root->data;
                  
                  if(y==INT_MIN)
                  y=root->data;
                  
                return {1,1+l[1]+r[1],x,y};
                
              }
          }
        return {0, max(l[1],r[1]),0,0};
    }
    
    int largestBst(Node *root)
    {
    	//Your code here
    	vector<int>res=largestBST(root);
        return res[1];
    }
};
