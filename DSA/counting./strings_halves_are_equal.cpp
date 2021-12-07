class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int arr[26]={0};
        int arr1[26]={0};
        
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            arr[s[i]-'A']++;
            
            else if(s[i]>='a' && s[i]<='z')
            arr[s[i]-'a']++;
        }
        
        for(int i=s.size()/2;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            arr1[s[i]-'A']++;
            
            else if(s[i]>='a' && s[i]<='z')
            arr1[s[i]-'a']++;
        }
        
        int ans1=0;
        int ans2=0;
        for(int i=0;i<26;i++)
        {
            if(i==0 || i==4 || i==8 || i==20 || i==14) 
            {
                ans1+=arr[i];
                ans2+=arr1[i];
            }
        }
        
        return ans1==ans2;
        
    }
};
