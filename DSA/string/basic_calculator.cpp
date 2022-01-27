class Solution {
public:
    int calculate(string s) 
    {
        stack<int>st1;
        stack<char>st2;
        
        int n=s.length();
        int num=0;
        int cur=0;
        char pre='+';
        
        for(int i=0; i<=n; i++)
        {
            char ch;
            if(i==n)
            ch='+';
            else
            ch=s[i];
            
            if(ch==' ')
            continue;
            
            if(ch=='(')
            {
                st1.push(cur);
                st2.push(pre);
                
                cur=0;
                num=0;
                
                pre='+';
                continue;
            }
            else if(s[i]==')')
            {
                if(pre=='+')
                cur+=num;
                
                if(pre=='-')
                cur-=num;
                
                if(st2.top() == '-')
                cur=-cur;
                
                cur+=st1.top();
                num=0;
                st1.pop();
                st2.pop();
            }
           
            else if(s[i]>='0' && s[i]<='9')
            num=(num*10)+(s[i]-'0');
            
            else
            {
                if(pre=='+')
                cur+=num;
                
                if(pre=='-')
                cur-=num;
                num=0;
                pre=s[i];
            }
        }
       
        while(!st1.empty())
        {
            cur+=st1.top();
            st1.pop();
        }
        return cur;
    }
};
