class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<int,int>mp;
        int res=0;
        int c=0;
        mp[s[0]]++;
        for(int j=1;j<s.size();j++){
            mp[s[j]]++;
            if(mp.size()<((j-c)+1)){
                mp[s[c]]--;
                if(mp[s[c]]<=0)
                mp.erase(s[c]);
                c++;
            }
            int temp=mp.size();
            res=max(temp,res);
        }
        return res;
    }
};
