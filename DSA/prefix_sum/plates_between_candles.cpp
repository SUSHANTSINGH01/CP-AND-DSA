class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        
        int n=s.length();
        vector<int>pre;
        vector<int>post;
        vector<int>res;
        int n1=queries.size();
        int curr = 0;
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '|')
                curr = c;
            else if(s[i] == '*')
                c++;
            pre.push_back(curr);
        }
        
        curr = 0, c = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == '|')
                curr = c;
            else if(s[i] == '*')
                c++;
            post.push_back(curr);
        }
        reverse(post.begin(), post.end());
      
        for(int i = 0; i < n1; i++)
        {
            int left = queries[i][0];
            int right = queries[i][1];
            int current = pre[right] + post[left] - c;
            if(current < 0)
                res.push_back(0);
            else
                res.push_back(current);
        }
        return res;
    }
};
