class Solution {
  public:
   unordered_map<string,int>mp;
    string solve(Node *root)
    {
        if(!root) 
        return "&";
        string s="";
        if(root->left==0 && root->right==0)
        {
            s=to_string(root->data);
            return s;
        }
        s += to_string(root->data);
        s += solve(root->left);
        s += solve(root->right);
        mp[s]++;
        return s;
    }
    int dupSub(Node *root) {
         solve(root);
         for(auto it:mp) 
         if(it.second>=2) 
         return true;
         return false;
    }
};
