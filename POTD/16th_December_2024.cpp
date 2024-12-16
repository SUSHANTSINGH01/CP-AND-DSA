class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        if(k>(n+m))
        return -1;
        
        while(i<n && j<m && k>1){
            if(a[i]<b[j])
            i++;
            else
            j++;
            k--;
        }
        
        if(i>=n && (j+k-1)<m)
        return b[j+k-1];
        
        if(j>=m && (i+k-1)<n)
        return a[i+k-1];
        
        if(i<n && j<m)
        return min(a[i],b[j]);
        return 0;
        
    }
};
