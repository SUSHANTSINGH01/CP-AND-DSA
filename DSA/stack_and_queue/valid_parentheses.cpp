class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        int i=0;
        int n=s.size();
        while(i<n){
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(st.empty())
                return false;
                else{
                    char top = st.top();
                    if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{') || (s[i]==']' && top=='['))
                    {}
                    else
                    return false;
                    
                    st.pop();
                }
            }else
            st.push(s[i]);
            i++;
        }
        return st.empty()?true:false;
    }
};
