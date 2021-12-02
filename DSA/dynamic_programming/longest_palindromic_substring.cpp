class Solution {
public:
    string maxx_palindrome(string s)
    {
        int n=s.size(),size;
        if(n<=1)
        return s;
        int max_l=1;
        int l,r;
        int st=0;
        for(int i=0;i<n;i++)
        {
            l=i;
            r=i;
            while(l>=0&&r<n && s[l]==s[r])
            {
                l--;
                r++;
            }
            size=r-l-1;
            if(size>max_l)
            {
                max_l=size;
                st=l+1;
            }

            l=i;
            r=i+1;
            while(l>=0&&r<n && s[l]==s[r])
            {
                l--;
                r++;
            }
            size=r-l-1;
            if(size>max_l)
            {
                max_l=size;
                st=l+1;
            }
         }
        return s.substr(st,max_l);
    }
    string longestPalindrome(string s)
    {
        string ans=maxx_palindrome(s);
        return ans;
    }
};
