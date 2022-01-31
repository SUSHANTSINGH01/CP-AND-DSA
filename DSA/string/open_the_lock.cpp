class Solution {
public:
    int openLock(vector<string>& deadends, string target) 
    {
        
        unordered_set<string>mp;
        queue<string>q;
        int c=0;
        
        
        for(int i=0;i<deadends.size();i++)
        mp.insert(deadends[i]);
        
        q.push("0000");
        
        while(!q.empty())
        {
            int t=q.size();
            while(t--)
            {
                string st=q.front();
                q.pop();
                
                if(mp.find(st)!=mp.end())
                continue;
                
                mp.insert(st);
                
                if(st==target)
                return c;
                
                
                for(int i=0;i<4;i++)
                {
                    string s1=st;
                    string s2=st;
                    
                    if(st[i]=='9') 
                    s1[i]='0';
                    else 
                    s1[i]=st[i]+1;

                    if(st[i]=='0')
                    s2[i]='9';
                    else 
                    s2[i]= st[i]-1;
                
                    if(mp.find(s1)==mp.end())
                    q.push(s1);

                    if(mp.find(s2)==mp.end())
                    q.push(s2);
                }
            }
           c++;
        }
        return -1;
    }
};
