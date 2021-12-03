int Solution::solve(string A) 
{

    int n=A.size();
    stack<char>st;
    int i=0;
    while(i<n)
    {
        if(st.empty())
        st.push(A[i]);
        else
        {
            if(st.top()=='(' && A[i]==')')
            st.pop();
            else if(st.top()=='(' && A[i]=='(')
            st.push(A[i]);

        }
        i++;
    }
     return st.empty();

}
