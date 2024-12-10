class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        int res=0;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int r=intervals[0][1];
        for(int i=1;i<n;i++){
            if(r<=intervals[i][0])
            r=intervals[i][1];
            else{
                r=min(r,intervals[i][1]);
                res++;
            }
        }
        return res;
    }
};
