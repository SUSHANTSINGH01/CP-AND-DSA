 stack<int>st;
    int a, b;
        
    for(int i=0; i<exp.length(); i++)
    {
            if(exp[i]>='0' && exp[i]<='9')
            st.push(exp[i]-'0');
            else
            {
                a = st.top(); 
                st.pop();
                b = st.top(); 
                st.pop();
                
                if(exp[i]=='+')
                st.push(b+a);
                else if(exp[i]=='-')
                st.push(b-a);
                else if(exp[i]=='*')
                st.push(b*a);
                else if(exp[i]=='/')
                st.push(b/a);
            }
    }
    return st.top();
    
