class Solution {
public:
    int countSubstrings(string s) 
    {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
           ans++;
			for(int j=i-1,k=i+1;j>=0&&k<s.size();j--,k++)
            {
                if(s[j]==s[k])
                ans++;
                else
                break;
            }
		    for(int j=i,k=i+1;j>=0&&k<s.size();j--,k++)
            {
                if(s[j]==s[k])
                ans++;
                else
                break;
            }
        }
        return ans;
    }
};
