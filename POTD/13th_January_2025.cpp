class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int res=0;
        int l=0;
        int r=n-1;
        while(l<r){
            int temp=min(arr[l],arr[r])*(r-l);
            res=max(temp,res);
            if(arr[r]>arr[l])
            l++;
            else
            r--;
        }
        return res;
    }
};
