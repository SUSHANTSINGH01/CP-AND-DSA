class Solution {
public:
    bool ispal(string s)
    {
        int n=s.size();
        for(int i=0;i<s.size()/2;i++)
        if(s[i]!=s[n-1-i])
        return false;
        return true;
    }
    bool isPalindrome(string s) 
    {
        string str="";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            str+=s[i];
            else if(s[i]>='A' && s[i]<='Z')
            str+=s[i]+32;
            else if(s[i]>=48 && s[i]<=57)
            str+=s[i];
        }
       // cout<<str;
        return ispal(str);
    }
};
