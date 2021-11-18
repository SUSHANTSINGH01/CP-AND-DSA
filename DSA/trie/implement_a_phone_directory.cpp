class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>>ans;
        vector<string>str;
        int m=s.size();
        unordered_map<string,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            string ss=contact[i];
            string sss="";
            int m1=ss.size();
            for(int j=0;j<min(m,m1);j++)
            {
                sss+=ss[j];
                mp[sss].push_back(i);
                
            }
        }
         string str1="";
         unordered_map<string,int>mp1;
        for(int i=0;i<m;i++)
        {
           
            str1+=s[i];
            
            if(mp[str1].size()>0)
            {
                vector<int>res=mp[str1];
                for(int j=0;j<res.size();j++)
                {
                    mp1[contact[res[j]]]++;
                    if(mp1[contact[res[j]]]==1)
                   str.push_back(contact[res[j]]);
                }
                   
                
            }
            sort(str.begin(),str.end());
            if(str.size()>0)
            {
                ans.push_back(str);
                str.clear();
            }
            else
            {
                str.push_back(to_string(0));
                ans.push_back(str);
                str.clear();
            }
            mp1.clear();
        }
        return ans;
    }
};
