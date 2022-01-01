int Solution::solve(string A) 
{
    stack<int>st;
    for(int i=0;i<A.size();i++)
    {
       if(st.empty())
       st.push(A[i]);
       else
       {
           if(st.top()=='(' && A[i]==')')
           st.pop();
           else
           st.push(A[i]);
       }
    }

    return st.size();
}
