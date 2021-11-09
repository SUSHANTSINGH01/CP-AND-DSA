class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
       
    vector<string>exp=tokens;
    stack<int>st;
    int a, b;
    
        
    for(int i=0; i<exp.size(); i++)
    {
            
            if(exp[i]!="+" && exp[i]!="-" && exp[i]!="*" && exp[i]!="/")
            st.push(stoi(exp[i]));
            else
            {
                a = st.top(); 
                st.pop();
                b = st.top(); 
                st.pop();
                
                if(exp[i]=="+")
                st.push(b+a);
                else if(exp[i]=="-")
                st.push(b-a);
                else if(exp[i]=="*")
                st.push(b*a);
                else if(exp[i]=="/")
                st.push(b/a);
            }
    }
    return st.top();
    }
};
