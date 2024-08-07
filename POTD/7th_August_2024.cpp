class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        
        int n=arr1.size();
        int m=arr2.size();
        
        int i=0;
        int j=0;
        
        if(k>(n+m))
        return -1;
        
        while(i<n && j<m && k>1){
            if(arr1[i]<arr2[j]){
                i++;
            }else{
                j++;
            }
            k--;
        }
        
        if(i>=n && (j+k-1)<m){
            return arr2[j+k-1];
        }
        
        if(j>=m && (i+k-1)<n){
            return arr1[i+k-1];
        }
        
        if(i<n && j<m)
        return min(arr1[i],arr2[j]);
        else
        return -1;
    }
};
