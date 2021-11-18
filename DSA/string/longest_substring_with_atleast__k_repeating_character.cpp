class Solution {
public:
    int longestSubstring(string s, int k) 
    {
        int l=0;
        int r=0;
        int ans=0; 
        int freq[26] = {0};
        int temp[26] = {0};  
        
        for(int i=0; i<s.size(); i++)
        freq[s[i]-'a']++;
        
        while(l<=r && r<=s.size())
        {
		   
            if(r==s.size() || freq[s[r]-'a']<k)
            {
                int templ = l;
                int tempr = r-1;
                while(templ<=tempr)
                {
                    bool change = false;
                    while(templ<=tempr && temp[s[templ]-'a']<k)
                    {
                            temp[s[templ]-'a']--; 
                            templ++;  
                            change = true;
                    }
                    
                    while(templ<tempr && temp[s[tempr]-'a']<k)
                    {
                            temp[s[tempr]-'a']--;
                            tempr--;
                    }

				
                    int i=0;
                    for(i=0; i<26; i++)
                    {
                        if(temp[i]<k && temp[i]>0)
                        break;
                    }
                 
                    if(i==26)
                    {
                        if(tempr-templ+1>=ans)
                        {
                            ans = tempr-templ+1;
                            break;
                        }
                    }
                    if(change==false)
                    {
                        temp[s[templ]-'a']--;
                        templ++;
                    }
                }         
                
                l=r; 
                for(int i=0; i<26; i++) 
                temp[i] = 0;
            }
            else 
            temp[s[r]-'a']++;
            r++;
        }
        
        return ans;
    }
};
