class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        
        int n=x.size();
        stack<int>st;
        
        for(int i=0;i<n;i++)
        {
            if(x[i]=='('||x[i]=='{'||x[i]=='[')
            st.push(x[i]);
            else if(st.size()==0)
            return false;
            else if(x[i]==')'&& st.top()=='(')
            st.pop();
            else if(x[i]=='}'&& st.top()=='{')
            st.pop();
            else if(x[i]==']'&& st.top()=='[')
            st.pop();
            else 
            return 0;
            
        }
        
        return st.size()==0?1:0;
    }

};
