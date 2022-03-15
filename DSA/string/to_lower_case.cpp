class Solution {
public:
    string toLowerCase(string s) 
    {
        
        for(int i=0;i<s.size();i++)
        if(s[i]>='A' && s[i]<='Z')
        s[i]=char('a' + int((s[i])-'A'));
        
        return s;
        
    }
};
