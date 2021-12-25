class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) 
    {
        stack<int>st1;
        stack<int>st2;
        int n=arr.size();
        vector<int>next(n);
        vector<int>prev(n);
        
        
        for(int i=0;i<n;i++)
        {
            next[i] = n-i-1;
            prev[i] = i;
        }
        
        
        for(int i=0;i<n;i++)
        {
            while(!st1.empty() && arr[st1.top()]>arr[i])
            {
                next[st1.top()] = i-st1.top()-1;
                st1.pop();
            }
            st1.push(i);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st2.empty() && arr[st2.top()]>=arr[i])
            {
                prev[st2.top()] = st2.top()-i-1;
                st2.pop();
            }
            st2.push(i);
        }
        
        long ans=0;
        int mod=1e9+7;
        
        for(int i = 0;i<n;i++)
        {
            ans=(ans + (long)arr[i] * (prev[i]+1) * (next[i]+1)) % mod;
            ans%=mod;
        }
        
        return ans;

    }
};
