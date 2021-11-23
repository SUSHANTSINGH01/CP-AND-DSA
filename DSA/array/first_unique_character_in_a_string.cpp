class Solution {
public:
    int firstUniqChar(string s) 
    {
       int n=s.size();
       int arr[26]={0};
        for(int i=0;i<n;i++)
        arr[s[i]-'a']++;  
        
        for(int i=0;i<n;i++)
        if(arr[s[i]-'a']<2)
        return i;
        return -1;
        
    }
};
