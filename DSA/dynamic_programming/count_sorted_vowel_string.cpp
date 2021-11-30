class Solution {
public:
    int countVowelStrings(int n) {
         vector<int>ans(n+1);     
         ans[0]=1;
        for(int j=0;j<5;j++)
        {
            for(int i=1;i<=n;i++)
            ans[i]+=ans[i-1];
            
        }
        return ans[n];
    }
};
