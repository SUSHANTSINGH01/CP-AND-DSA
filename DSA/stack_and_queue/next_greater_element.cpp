class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long int> st;
        st.push(arr[n-1]);
        vector<long long int>v;
        v.push_back(-1);
        for(int i=n-2;i>=0;i--)
        {
            long long int tp=st.top();
            if(tp>arr[i])
            {
                v.push_back(tp);
                st.push(arr[i]);
            }
            else
            {
                
                while(!st.empty() && arr[i]>tp)
                {
                  st.pop();
                  if(st.empty()==false)
                  tp=st.top();
                }
                if(st.empty()==true)
                {
                   v.push_back(-1);
                   st.push(arr[i]);
                }
                else
                {
                    v.push_back(tp);
                    st.push(arr[i]);
                }
            }
            
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
