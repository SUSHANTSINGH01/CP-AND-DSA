class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        
        int i=0;
        int j=0;
        int n=s.size();
        int m=p.size();
        vector<int>mp(26,0);
        
        for(char ch:p)
        mp[ch-'a']++;
        
        if(n<m) 
        return "-1";
        
        int st_ind=0;
        int minn=INT_MAX;
        
        while(j<n){
            
            if(mp[s[j]-'a']>0) 
            m--;
            
            mp[s[j]-'a']--; 
            while(m==0){ 
                
                int temp=j-i+1;
                if(temp<minn){ 
                    minn=temp;
                    st_ind=i;
                }
                mp[s[i]-'a']++;
                if(mp[s[i]-'a']>0)
                m++;
                i++;
            }
            j++;
        }
        
        return minn==INT_MAX?"-1":s.substr(st_ind,minn);
    }
};
