class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        if(p.size()>s.size())
        return {};
        int arr1[26];
        for(int i=0;i<26;i++)
        arr1[i]=0;
        
        for(int i=0;i<p.size();i++)
        arr1[(p[i])-'a']++;
        
        int arr2[26];
        for(int i=0;i<26;i++)
        arr2[i]=0;
        
        int n=s.size();
        
        for(int i=0;i<p.size();i++)
        arr2[(s[i])-'a']++;
        
        int f=0;
        vector<int>res;
        for(int i=0;i<26;i++)
        if(arr1[i]!=arr2[i])
        f=1;
        
        if(f==0)
        res.push_back(0);
       
        for(int i=1;i+p.size()<=n;i++)
        {
            arr2[s[i-1]-'a']--;
            arr2[(s[i+p.size()-1]-'a')]++;
            f=0;
           
            for(int i=0;i<26;i++)
            if(arr1[i]!=arr2[i])
            f=1;
           
            if(f==0)
            res.push_back(i);
        }
        return res;
    }
};
