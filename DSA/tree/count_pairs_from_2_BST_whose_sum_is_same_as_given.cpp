class Solution{
public:
   unordered_map<int,int>mp;
   int c=0;
   void maping(Node *root){
       if(root==NULL)
       return;
       mp[root->data]=1;
       maping(root->left);
       maping(root->right);
   }
   void count(Node *root,int x)
   {
       if(root==0) 
       return;
       int n=x-root->data;
       if(mp.find(n)!=mp.end())
       c++;
       count(root->left,x);
       count(root->right,x);
   }
    
    int countPairs(Node* root1, Node* root2, int x)
    {
     maping(root1);
     count(root2,x);
     return c;
    }
};
