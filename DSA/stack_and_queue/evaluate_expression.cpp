int Solution::evalRPN(vector<string> &A) 
{
    stack<int>st;
    
    for(int i=0;i<A.size();i++)
    {
        
        if(A[i]=="+")
        {
               int x=st.top();
               st.pop();
              
               int y=st.top();
                st.pop();
               st.push(x+y);
            }
        else if(A[i]=="-")
        {
              int x=st.top();
               st.pop();
              int y=st.top();
               st.pop();
               st.push(y-x);
              
        }
        else if(A[i]=="*")
        {
               int x=st.top();
               st.pop();
               int y=0;
              
               y=st.top();
                st.pop();
               st.push(x*y);
              
        }
        else if(A[i]=="/")
        {
            
               int x=st.top();
               st.pop();
              
               
               int y=st.top();
                st.pop();
               st.push(y/x);
               
              
        }
        else 
        {
            st.push(stoi(A[i]));
        }
    }
    
    return st.top();
}
