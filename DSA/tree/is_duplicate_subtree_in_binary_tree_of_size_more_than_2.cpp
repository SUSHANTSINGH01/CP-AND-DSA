

// First Solution


class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
     int dup=0;
     string duplicate(Node *root, unordered_map<string,int>& mp){
        
        if(!root)
        return "";
        
        string left = duplicate(root->left,mp);
        string right = duplicate(root->right,mp);
        
        string temp="";
        
            temp = left+right+"*"+to_string(root->data);
            
            if(left!="" || right!=""){
            mp[temp]++;
            
            if(mp[temp]>=2){
                dup=1;
                return temp;
            }
        }
        return temp;
    }
    
    int dupSub(Node *root) {
         // code here
        unordered_map<string,int>mp;
        duplicate(root,mp);
        return dup;
    }
};


// Second Solution


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
