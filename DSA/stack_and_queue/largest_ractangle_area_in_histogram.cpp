class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
       vector<int>right(n,n);
       vector<int>left(n,-1);
       stack<int>st;
       
       for(int i=0;i<n;i++)
       {
           
          if(st.empty()==true)
          st.push(i);
          else
          {
              if(arr[i]>=arr[st.top()])
              st.push(i);
              else
              {
                  
                  while(st.empty()==false && arr[st.top()]>arr[i] )
                  {
                      
                     right[st.top()]=i;
                    
                     st.pop();
                  }
                  
                  st.push(i);
                }
              
          }
       }
       
      while(st.empty()==false)
      st.pop();
      
      
      for(int i=n-1;i>=0;i--)
       {
           
          if(st.empty())
          st.push(i);
          else
          {
              if(arr[i]>=arr[st.top()])
              st.push(i);
              else
              {
                  
                  while(st.empty()==false && arr[st.top()]>arr[i] )
                  {
                      
                     left[st.top()]=i;
                      
                     st.pop();
                  }
                  
                  st.push(i);
                  
              }
              
          }
       }
       
     
     
     long long ans=0;
     long long int lval;
     long long int rval;
     
     for(int i=0;i<n;i++)
     {
         
         lval=left[i];
         rval=right[i];
         
         long long int area=arr[i]*(rval-lval-1);
         ans=max(ans,area);
         
      }
       return ans;
    }
};
