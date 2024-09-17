class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int res=abs(arr[n-1]-arr[0]);
        int minn=arr[0]+k;
        int maxx=arr[n-1]-k;
        int new_minn=0;
        int new_maxx=0;
    
        for(int i=0;i<n-1;i++){
            new_minn=min(minn,arr[i+1]-k);
            new_maxx=max(maxx,arr[i]+k);
            if(new_minn<0)
            continue;
            res=min(res,abs(new_maxx-new_minn));
        }
        
        return res;
    }
};
