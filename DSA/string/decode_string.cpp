class Solution {
public:
    string decodeString(string s) 
    {
        stack<int>v;
        stack<string>str;
        string ans;
        int num=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'  && s[i]<='9')
            num=num*10+(s[i]-'0');
            else if (s[i]>='a'  && s[i]<='z')
            ans.push_back(s[i]);
            else if (s[i]=='[')
            {
                str.push(ans);
                v.push(num);
                num=0;
                ans="";        
            }
            else
            {
                string str2=ans;
                ans=str.top();  
                str.pop();
                int val=v.top(); 
                v.pop();
                while(val--)
                ans=ans+str2;
                num=0;
            }
        }
        return ans;
    }
};
