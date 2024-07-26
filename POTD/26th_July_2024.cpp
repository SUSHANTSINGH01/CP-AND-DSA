class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        unordered_map<char,int>mp;
        int c=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' '){
                c++;
                mp[str[i]]=1;
            }
        }
        int required=26-mp.size();
        if(required<=c-mp.size() && required<=k){
           return true; 
        }
        return false;
    }
};
