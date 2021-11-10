class Solution {
public:
    int trailingZeroes(int n) 
    {
        vector<int>ans;
        int c=0;
        for(int i=5;i<10005;i*=5)
        {
            ans.push_back(i);
        }
        for(int i=0;i<ans.size();i++)
        {
            c+=(n/ans[i]);
        }
        return c;
    }
};
