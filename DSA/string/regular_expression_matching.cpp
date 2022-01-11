class Solution {
public:
    bool isMatch(string s, string p) {
     
        if(p.size()==0)
        return s.size()==0;
        
        if(p.size()>1 && p[1]=='*')
        {
            if(isMatch(s,p.substr(2)))
            return 1;
            
            if((s[0] == p[0] || p[0] == '.') && s.size() > 0)
            return isMatch(s.substr(1),p);
            
            return 0;
        }
        else
        {
            if((s[0] == p[0] || p[0] == '.') && s.size() > 0)
            return isMatch(s.substr(1), p.substr(1));
            
            return 0;
        }
    }
};
