class Solution {
public:
    int solve(int count[26])
    {
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<26;i++)
        {
            maxx=max(maxx, count[i]);
            if(count[i]>=1)
            minn=min(minn, count[i]);
            
        }
        return (maxx-minn);
    }
    int beautySum(string s) 
    {
        int n=s.size();
        int res=0;
        for(int i=0; i<n; i++)
        {
            int count[26] = {0};
            for(int j=i; j<n; j++)
            {
                count[s[j]-'a']++;
                res+=solve(count);
            }
        }
        return res;
    }
};
