bool myComparison(vector<int> &a,vector<int> &b)
{
       return a[0]-a[1]<b[0]-b[1];
}
class Solution {
public:
   
    int twoCitySchedCost(vector<vector<int>>& costs) {
        // lambda function
        // sort(costs.begin(),costs.end(),[](vector<int> a,vector<int> b)
        // {
        //     return a[0]-a[1]<b[0]-b[1];
        // });
        sort(costs.begin(),costs.end(),myComparison);
         int n=costs.size();
        // for(int i=0;i<n;i++)
        // cout<<costs[i][0]<<" "<<costs[i][1]<<endl;
        int sum=0;
       
        for(int j=0;j<n/2;j++)
        sum+=costs[j][0];
        for(int j=n/2;j<n;j++)
        sum+=costs[j][1];
        
        return sum;
    }
};
