class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        int n=arr.size();
        int res=0;
        sort(arr.begin(),arr.end());
        for(int i=2;i<n;i++){
            int l=0;
            int r=i-1;
            while(l<r){
                if((arr[l]+arr[r])>arr[i]){
                    res+=(r-l);
                    r--;
                }else
                l++;
            }
        }
        return res;
    }
};
