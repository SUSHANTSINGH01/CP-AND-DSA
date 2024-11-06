class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        vector<vector<int>>res;
        int n=arr.size();
        for(int i=0;i<n-2;i++)
            for(int j=i+1;j<n-1;j++)
                for(int k=j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]+arr[k]==0)
                    {
                        vector<int>temp;
                        temp.push_back(i);
                        temp.push_back(j);
                        temp.push_back(k);
                        res.push_back(temp);
                    }
                }
        return res;
    }
};