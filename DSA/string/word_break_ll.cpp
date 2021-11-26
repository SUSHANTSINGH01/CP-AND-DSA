class Solution {
public:
    void solve(string str, int i, set<string> &st , vector<string> &ans , string t)
    {
        if(i==str.size())
        {
            string temp=t.substr(1);
            ans.push_back(temp);
            return;
        }

        string tmp;
        for(int j=i;j<str.size();j++)
        {    
            tmp+=str[j];
            if(st.find(tmp) != st.end())
            solve(str,j+1,st,ans,t+" "+tmp);
            
        }
    }
    
    vector<string> wordBreak(string s, vector<string>& wordDict)
    {
        set<string>st;
        
        for(int i=0;i<wordDict.size();i++)
        st.insert(wordDict[i]);
        
        vector<string>ans;
        solve(s,0,st,ans,"");
    
        return ans;
    }
};
