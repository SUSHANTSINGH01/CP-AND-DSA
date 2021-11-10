// greedy approach

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        
        vector<int>ans;
        
        
        for(int i=0;i<K;i++)
        {
            for(int j=0;j<K;j++)
            {
               ans.push_back(arr[i][j]);
               //cout<<arr[i][j]<<" ";
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
