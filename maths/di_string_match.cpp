class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        vector<int>res;
        int n=s.length();
        int n1=n;
        int l=0;
        
        for(int i=0; i<n; i++) 
        {
            if(s[i]=='I') 
            {
                res.push_back(l);
                l++;
            }
            else 
            {
                res.push_back(n1);
                n1--;
            }
        }
        res.push_back(l);
        return res;
    }
};
