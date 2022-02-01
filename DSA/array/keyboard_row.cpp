class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
         unordered_map<int,int>mp;
        vector<string>vec;
         mp['Q'-'A']=1;
        mp['W'-'A']=1;
        mp['E'-'A']=1;
        mp['R'-'A']=1;
        mp['T'-'A']=1;
        mp['Y'-'A']=1;
        mp['U'-'A']=1;
        mp['I'-'A']=1;
        mp['O'-'A']=1;
        mp['P'-'A']=1;
        mp['A'-'A']=2;
        mp['S'-'A']=2;
        mp['D'-'A']=2;
        mp['F'-'A']=2;
        mp['G'-'A']=2;
        mp['H'-'A']=2;
        mp['J'-'A']=2;
        mp['K'-'A']=2;
        mp['L'-'A']=2;
        mp['Z'-'A']=3;
        mp['X'-'A']=3;
        mp['C'-'A']=3;
        mp['V'-'A']=3;
        mp['B'-'A']=3;
        mp['N'-'A']=3;
        mp['M'-'A']=3;
        
        
        for(auto it:words)
        {
            string s=it;
            int n=s.size();
            int sum=0;
            cout<<n;
            int prev=0;
            if(s[0]>='a' && s[0]<='z')
            prev+=mp[s[0]-'a'];
            else
            prev+=mp[s[0]-'A']; 
           
             int f=0;
            for(int i=1;i<n;i++)
            {
               
                
                if(s[i]>='a' && s[i]<='z')
                {
                    if(mp[s[i]-'a']!=prev)
                    {
                        f=1;
                        break;
                    }
                    prev=mp[s[i]-'a'];
                }
                else
                {
                    if(mp[s[i]-'A']!=prev)
                    {
                        f=1;
                        break;
                    }
                    prev=mp[s[i]-'A'];
                }
            }
            
            if(f==1)
                continue;
            vec.push_back(s);
            
        }
        return vec;
    }
};
