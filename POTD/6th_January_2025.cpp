class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int>res;
        int l=0;
        int r=arr.size()-1;
        int diff=INT_MAX;
        while(l<r){
            int temp=abs(target-(arr[l]+arr[r]));
            if(temp<diff){
                diff=temp;
                res={arr[l],arr[r]};
            }
            if((arr[l]+arr[r])>target)
            r--;
            else
            l++;
        }
        return res;
    }
};
