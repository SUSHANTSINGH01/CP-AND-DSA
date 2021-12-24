class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        int v1,v2;
        int ans=0;
        stack<int>st;
        
        for(auto it:ops)
        {
            if(it=="C")
            st.pop();
            
            else if(it=="D")
            st.push(st.top()*2);
            
            else if(it=="+")
            {
                v1=st.top();
                st.pop();
                v2=st.top();
                st.push(v1);
                st.push(v1+v2);
            }
            else
            st.push(stoi(it)); 
       }
        while(st.size() != 0)
        {
            ans+=st.top();
            st.pop();
        }
        return ans; 
    }
};
