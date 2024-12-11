class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        int i=n-1;
        int j=0;
        while(i>=0 and j<m)
        {
            if(a[i]>=b[j])
            {
                swap(a[i],b[j]);
                i--;
                j++;
            }
            else
            break;
            
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }
};
