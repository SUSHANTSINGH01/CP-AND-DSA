class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        vector<int>res;
        vector<int>vec=arr;
        sort(vec.begin(),vec.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            int idx=lower_bound(vec.begin(),vec.end(),arr[i])-vec.begin();
            res.push_back(idx);
            vec.erase(vec.begin()+idx);
        }
        return res;
    }
};
