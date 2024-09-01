class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
        
        int i=0;
        int j=0;
        int n=arr1.size();
        int m=arr2.size();
        long long int res=0;
        long long int sum1=0;
        long long int sum2=0;
        
        while(i<n && j<m){
            
            if(arr1[i]<arr2[j])
            sum1+=arr1[i++];
            else if(arr1[i]>arr2[j])
            sum2+=arr2[j++];
            else if(arr1[i]==arr2[j]){
                res+=max(sum1,sum2)+arr1[i];
                i++;
                j++;
                sum1=0;
                sum2=0;
            }
        }
        
        while(i<n)
        sum1+=arr1[i++];
        
        while(j<m)
        sum2+=arr2[j++];
        
        res+=max(sum1,sum2);
        return res;
    }
};
