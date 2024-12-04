class Solution {
  public:
    
    vector<int>find_lps(string &pattern)
    {
        
        int i=0;
        int j=1;
        int n=pattern.size();
        vector<int>lps(n,0);
        while(j<n)
        {
            if(pattern[i]==pattern[j])
            lps[j++]=1+i++;
            else if(i!=0)
            i=lps[i-1];
            else
            lps[j++]=0;
        }
        return lps;
    }
    
    bool areRotations(string &s1, string &s2) {
        // Your code here
        if(s1.size()!=s2.size())
        return 0;
        s1+=s1;
        int m=s1.size();
        int n=s2.size();
        int i=0;
        int j=0;
        vector<int>lps=find_lps(s2); 
        while(i<m)
        {
            if(s1[i]==s2[j])
            {
                i++;
                j++;
            }
            if(j==n)
            return 1;
            else if(i<m && s1[i]!=s2[j])
            {
               if(j!=0)
               j=lps[j-1];
               else
               i++;
            }
        }
        return 0;
    }
};
