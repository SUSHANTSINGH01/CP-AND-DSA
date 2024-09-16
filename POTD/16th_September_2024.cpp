class Solution {
  public:
    int maxLength(string& str) {
        // code here
        
        int maxx=0;
        stack<int>st;
        st.push(-1);
        int n=str.size();
        
        
        for(int i=0;i<n;i++){
            
            if(str[i]=='(')
            st.push(i);
            
            else{

                st.pop();
                if(st.empty())
                st.push(i);
                else
                maxx=max(maxx,i-st.top());
                
            }
        }
        return maxx;
    }
};
