class Solution {
public:
    string licenseKeyFormatting(string s, int k) 
    {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        if(s[i]!='-')
        st.push(s[i]);
        
        string str="";
        int k1=k;
        while(st.size()>=1)
        {
            k1--;
              str+=st.top();
                st.pop();
            if(k1==0 && st.size()>=1)
            {
                str+='-';
                k1=k;
            }
            
                
        }
        reverse(str.begin(),str.end());
        int n1=str.size();
        for(int i=0;i<n1;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            str[i]=(str[i]-'a'+'A');
        }
        return str;
        
    }
};
