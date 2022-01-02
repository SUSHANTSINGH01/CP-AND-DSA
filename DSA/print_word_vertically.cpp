class Solution {
public:
    vector<string> printVertically(string s) 
    {
        vector<string>v;
        string str="";
        int f=0;
        int maxx=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            if(int(s[i])==32 && f==1)
            continue;
            if(int(s[i])==32 && f==0)
            {
                v.push_back(str);
                int l=str.size();
                maxx=max(maxx,l);
                f=1;
                str="";
            }
            else
            {
               str+=s[i];
                f=0;
            }
            
        }
        v.push_back(str);
        int l=str.size();
        maxx=max(maxx,l);
        vector<string>res;
        string str1="";
        for(int i=0;i<maxx;i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(i<v[j].size())
                str1+=v[j][i];
                else
                str1+=" ";
            }
            int k;
            
            for(k=str1.size()-1;k>=0;k--)
            if(int(str1[k])==32)
            continue;
            else
            break;
            res.push_back(str1.substr(0,k+1));
            str1="";
        }
    return res;
    }
};
