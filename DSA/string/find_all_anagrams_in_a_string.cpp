class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        if(p.size()>s.size())
        return {};
        
        vector<int>res;
        int arr[26]={0};
        
        int n=p.size();
        for(int i=0;i<26;i++)
        arr[i]=0;
        for(int i=0;i<n;i++)
        arr[p[i]-'a']++;
       
        for(int i=0;i<=s.size()-n;i++)
        {
            
             int arr1[26]={0};
             for(int i=0;i<26;i++)
             arr1[i]=0;
            
            for(int j=i;j<i+n && j<s.size();j++)
            arr1[s[j]-'a']++;
            
            int f=0;
            for(int k=0;k<26;k++)
            {
               
                if(arr[k]!=arr1[k])
                {
                  f=1;
                  break;
                }
            }
            
            if(f==0)
            res.push_back(i);
       }
       return res;
    }
};
