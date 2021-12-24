int  Solution::largestRectangleArea(vector<int > &A)
 {
        long long int  n=A.size(); 
        stack<long long int >st;
        stack<long long int >st1;
        long long int  ans=0; 
        long long int  left[n];
        long long int  right[n];
        
        
        for(int  i=0;i<n;i++) 
        {
            while(!st.empty() && A[st.top()] >= A[i]) 
            st.pop();         
            if(st.size()==0) 
            left[i]=0; 
            else 
            left[i]=st.top()+1; 
            st.push(i); 
        } 
        
        for(int  i=n-1;i>=0;i--) 
        {
            while(!st1.empty() && A[st1.top()]>=A[i]) 
            st1.pop(); 
            if(st1.size()==0) 
            right[i]=n-1; 
            else 
            right[i]=st1.top()-1;
            st1.push(i); 
        }
         
        for(int  i=0;i<n;i++) 
        ans = max(ans,A[i]*(right[i]-left[i]+1));
        
        return ans;
}
