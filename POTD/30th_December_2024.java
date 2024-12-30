class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int>st;
        int n=a.size();
        int m=b.size();
        for(int i=0;i<n;i++){
          st.insert(a[i]);
        }
        for(int i=0;i<m;i++){
          st.insert(b[i]);
        }
        return st.size();
    }
};
