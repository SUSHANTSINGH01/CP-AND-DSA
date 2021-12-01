class Solution {
  public:
    long long int countBT(int h) { 
        // code here
        int md=1e9 + 7;
        vector<long long  int>ans(h + 1);
        ans[0] = 1;
        ans[1] = 1;
        for(int i=2;i<=h;i++)
        ans[i]=(ans[i-1] * (ans[i-1]+2*ans[i-2])) % md;
        return ans[h];
    }
};
