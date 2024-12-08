class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>>res;
        int n=arr.size();
        sort(arr.begin(),arr.end(),[](vector<int>&a,vector<int>&b){
            return a[0]<b[0];
        });
        int st=arr[0][0];
        int end=arr[0][1];
        for(int i=1;i<n;i++)
        {
            if(arr[i][0]<=end)
            end=max(end,arr[i][1]);
            else
            {
                res.push_back({st,end});
                st=arr[i][0];
                end=max(arr[i][1],end);
            }
        }
        res.push_back({st,end});
        return res;
    }
};
