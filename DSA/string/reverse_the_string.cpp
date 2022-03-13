string Solution::solve(string A) 
{
        stack<string>st;
        string res;
        
        for (int i=0;i<A.size();i++)
        {
            string tmp;
            if(A[i]==' ')
            continue;
            while (i<A.size() && A[i]!=' ')
            {
                tmp+=A[i];
                i++;
            }
            st.push(tmp);
        }
        
        while (!st.empty())
        {
            res+=st.top();
            st.pop();
            if(!st.empty())
            res+= " ";
        }
        return res;
}
