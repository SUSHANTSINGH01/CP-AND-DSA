class Solution {
public:
    string frequencySort(string s) 
    {
        
        vector<pair<int,int>>v;
        int arr[300]={0};
        
        int n=s.size();
        for(int i=0;i<n;i++)
        arr[int(s[i])]++;
        
        for(int i=0;i<300;i++)
        v.push_back({arr[i],i});
        
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        
        string str="";
        for(auto it:v)
        {
            int m=it.first;
            char ch=char(it.second);
            for(int i=0;i<m;i++)
            str+=ch;
        }
        
        return str;
        
    }
};
