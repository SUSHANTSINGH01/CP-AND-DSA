class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
        
        int n=arr.size();
        int m=brr.size();
        long long res=0;
        
        vector<double>new_arr(n);
        vector<double>new_brr(m);
        
        for(int i=0;i<n;i++)
        new_arr[i]=log2(arr[i])/arr[i];
        
        for(int i=0;i<m;i++)
        new_brr[i]=log2(brr[i])/brr[i];
        
        sort(new_arr.begin(),new_arr.end());
        sort(new_brr.begin(),new_brr.end());
        
        for(int i=0;i<m;i++){
            int ind=upper_bound(new_arr.begin(),new_arr.end(),new_brr[i])-new_arr.begin();
            if(ind!=n)
            res+=(n-ind);
        }
        
        return res;
    }
};
