class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
         int n=temperatures.size()-1;
         vector<int>v(n+1, 0); 
         stack<int>st;
        
		
        for(int i=n; i>=0; i--)
        {
           
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
            st.pop();
				
            if(!st.empty())
            v[i]=st.top()-i; 
            
            st.push(i);
        }
        
        return v;
    }
};
