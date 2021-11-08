class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int ans=0;
        int n=s.length();
        int left=0;
        int right=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            left++;
            else
            right++;
            if(left==right)
            ans=max(ans,2*right);
            else if(right>left)
            {
                left=0;
                right=0;
            }
        }
        
        left=0;
        right=0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='(')
            left++;
            else
            right++;
            if(left==right)
            ans=max(ans,2*right);
            else if(left>right)
            {
                left=0;
                right=0;
            }
        }
        return ans;
    }
};
