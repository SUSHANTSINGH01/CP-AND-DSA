class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        // Code here
        int n=arr.size();
        unordered_set<int>st;
        for(auto it:arr)
        st.insert(it);
        
        vector<int>res(n,-1);
        for(int i=0;i<n;i++)
        if(st.find(i)!=st.end())
        res[i] = i;
    
        return res;
    }
};
