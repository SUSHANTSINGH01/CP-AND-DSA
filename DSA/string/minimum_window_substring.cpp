class Solution {
public:
    string minWindow(string s, string t) 
    {
    int n=s.size();
    unordered_map<char,int> mp;
    for(int i=0;i<t.size();++i)
    mp[t[i]]++;
    
    string ans;
    int c=mp.size();
   
    int mn=INT_MAX;
    int i=0;
    int j=0;
    while(j<n)
    {
        if(mp.find(s[j])!=mp.end())
        {
            mp[s[j]]--;
            if(mp[s[j]]==0)
            c--;
            
        }
        while(c==0)
        {
            if(j-i+1<mn)
            {
                mn=j-i+1;
                ans=s.substr(i,j-i+1);
            }
            if(mp.find(s[i])!=mp.end())
            {
                mp[s[i]]++;
                if(mp[s[i]]==1)
                c++;
                
            }
            i++;
        }
        j++;
    }
    return ans;
   }
    
};
