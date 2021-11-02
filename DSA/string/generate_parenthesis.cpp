class Solution {
public:
    vector<string>ans;
    char str[26];
    void solve(int pos,int n,int open,int close)
    {
        if(close==n)
        {
            ans.push_back(str);
            return;
        }
        else
        {
            if(open>close)
            {
                str[pos] = ')';
                solve(pos+1,n,open,close+1);
            }

            if(open<n)
            {
                str[pos] = '(';
                solve(pos+1,n,open+1,close);
            }
        }
    }
    vector<string> generateParenthesis(int n)
    {
        solve(0,n,0,0);
        return ans;
        
    }
};
