class Solution {
public:
    string customSortString(string order, string s)
    {
        
        int arr[26]={0};
        vector<pair<int,pair<int,int>>>vp;
        
        int n=order.size();
        for(int i=0;i<n;i++)
        arr[order[i]-'a']=i;
        
        int n1=s.size();
        int arr1[26]={0};
        for(int i=0;i<n1;i++)
        {
            //arr1[s[i]-'a']++;
            vp.push_back({arr[s[i]-'a'],make_pair(s[i]-'a',1)});
        }
        sort(vp.begin(),vp.end());
        
        string res="";
        for(auto it:vp)
        {
            int a=it.second.second;
            int b=it.second.first;
            
            while(a--)
            {
                res+=char(b+97);
            }
        }
        
        return res;
    }
};
