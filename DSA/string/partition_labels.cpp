class Solution {
public:
    vector<int>partitionLabels(string s)
    {
        vector<int>res;
        int i=0;
        int pos=0;
        int n=s.size();
        for(i=0;i<n;i)
        {
            int j=i;
            unordered_map<int,int>mp;
            for(j=i;j<n;j++)
            {
                
                if(s[i]==s[j])
                pos=j;
            }
            
            for(j=i;j<=pos;j++)
            mp[s[j]-'a'+1]++;
            
            for(j=pos+1;j<n;j++)
            {
                mp[s[j]-'a'+1]++;
                if(pos!=i)
                {
                    if(mp[s[j]-'a'+1]==1)
                    {
                        mp[s[j]-'a'+1]--;
                        for(int k=pos;k>=i;k--)
                        {
                            if(s[k]==s[j])
                            pos=j;
                        }
                    }
                    else 
                    pos=j;
                }
                else
                break;
                
            }
            if(i==n)
            {
                res.push_back(n-pos);
                break;
            }
            res.push_back(pos-i+1);
            i=pos;
            i++;
            mp.clear();
            
        }
        return res;
    }
};
