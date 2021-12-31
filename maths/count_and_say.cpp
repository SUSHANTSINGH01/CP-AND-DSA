string Solution::countAndSay(int A) 
{
        if(A==1) 
        return "1";
        else 
        {
            string str=countAndSay(A-1);
            string ans="";
            char ch=str[0];
            int t=0;
            for (int i=0;i<str.length();i++) 
            {
                if(ch==str[i]) 
                t++;
                else 
                {
                    ans+=to_string(t)+ch;
                    ch=str[i];
                    t=1;
                }
            }
            ans+=to_string(t)+ch;
            return ans;
        }
}
