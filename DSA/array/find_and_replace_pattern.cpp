class Solution {
public:
    bool solve(string &str,string &pat) 
    {
         unordered_map<char,char>words;
         unordered_map<char,char>mp;
        for(int i=0;i<str.length();i++) 
        {
            mp[str[i]]=1;
           
            if(words.find(pat[i])==words.end()) 
            words[pat[i]]=str[i];
            
            
            else if(words[pat[i]]!=str[i]) 
            return 0;
            
        }
        return mp.size()==words.size();
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
       vector<string>res;
       
        for(int i=0;i<words.size();i++) 
        if(solve(words[i],pattern)) 
        res.push_back(words[i]);
        return res;
    }
};
