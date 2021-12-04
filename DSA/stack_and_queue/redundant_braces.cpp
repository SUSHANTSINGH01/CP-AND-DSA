int Solution::braces(string A)
{
   
    int n=A.size();
    stack<char>st;
    
    for(int i=0;i<n;i++)
    {
        if(A[i] == '(')
        st.push(A[i]);
        
        else if(!st.empty() && (A[i] == '+' || A[i] == '-' || A[i] == '*' || A[i] == '/'))
        st.pop();
    }
    
    return !st.empty(); 
}
