class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        
        int res=0;
        int l_max=0;
        int r_max=0;
        int n=arr.size();
        int l=0;
        int r=n-1;
        while(l<r)
        {
            if(arr[l]<arr[r])
            {
                if(l_max<arr[l])
                l_max=arr[l++];
                else
                res+=(l_max-arr[l++]);
            }
            else
            {
                if(r_max<arr[r])
                r_max=arr[r--];
                else
                res+=(r_max-arr[r--]);
            }
        }
        return res;
    }
};
