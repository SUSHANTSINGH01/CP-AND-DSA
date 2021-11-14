class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        unordered_map<char,list<char>>mp;
        unordered_map<char,int>indeg;
        for(int i=0;i<N;i++)
        {
            string str=dict[i];
            for(char &ch : str)
            {
                indeg[ch]=0;
                list<char> li;
                mp[ch]=li;
            }
        }
        for(int i=0;i<N-1;i++)
        {
            string s1=dict[i];
            string s2=dict[i+1];
            for(int j=0;j<min(s1.size(),s2.size());j++)
            {
                if(s1[j]!=s2[j])
                {
                    mp[s1[j]].push_back(s2[j]);
                    indeg[s2[j]]++;
                    break;
                }
            }
        }
        string str=" ";
        queue<char>q;
        for(auto it=indeg.begin();it!=indeg.end();it++)
        {
            if(it->second==0)
            q.push(it->first);
        }
        while(!q.empty())
        {
            char ch=q.front();
            q.pop();
            str+=ch;
            for(char & st : mp[ch])
            {
                indeg[st]--;
                if(indeg[st]==0)
                q.push(st);
            }
        }
        return str;
           
    }
};
