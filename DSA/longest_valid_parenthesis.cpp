int Solution::longestValidParentheses(string A) {
       stack<int>st;
       st.push(-1);
       int c=0;
       int n=A.size();
       for(int i=0;i<n;i++)
       {
           if(A[i]=='(')
           st.push(i);
           
           else
           {
               st.pop();
               if(st.empty())
               st.push(i);
               
               else
               {
                   int k=i-st.top();
                   c=max(c,k);
               }
           }
       }
       return c;
}
