class Solution {
  public:
    int Maximize(vector<int> &arr) {
        // Complete the function
        
        sort(arr.begin(),arr.end());
        int md=1000000007;
        
        long long int res=0;
        for(long long int i=1;i<arr.size();i++)
        {
            long long int temp=(arr[i]*i)%md;
            res+=temp;
            res%=md;
        }
        
        return res;
    }
};
