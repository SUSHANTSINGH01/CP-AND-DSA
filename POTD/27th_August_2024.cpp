class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        
        int n=arr.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            
            while(!st.empty() && st.top()>=arr[i]) 
            st.pop();

            if(!st.empty()) 
            left[i]=st.top();
            
            st.push(arr[i]);
        }
        
        st=stack<int>();
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && st.top()>=arr[i]) 
            st.pop();
            
            if(!st.empty()) 
            right[i]=st.top();
            
            st.push(arr[i]);
        }
        
        int res=0;
        
        for(int i=0;i<n;i++)
        res=max(res,abs(left[i]-right[i]));
        
        return res;
        
    }
};
