class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        // Your code here
        unordered_map<int,Node*>mp;
        int n=parent.size();
        for(int i=0;i<n;i++)
        mp[i]=new Node(i);
        int root=-1;
        for(int i=0;i<n;i++) {
            int val=parent[i];
            if(val==-1){
               root=i;
               continue;
            }
            Node* pointer=mp[parent[i]];
            if(pointer->left==nullptr) 
            pointer->left=mp[i];
            else
            pointer->right=mp[i];
           
        }
        return mp[root];
    }
};
