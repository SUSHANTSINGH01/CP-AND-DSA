class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        map<pair<int,int>,int>mp;
        int arr1[100005]={0};
        int n=arr.size();
         
        for(int i=0;i<100005;i++)
        arr1[i]=0;
        
        for(int i=0;i<n;i++)
        arr1[arr[i]]++;
        
        for(int i=0;i<100005;i++)
        {
            if(arr1[i]!=0)
            mp[{arr1[i],i}]++;
               
               
        }
        
        int half=n/2;
      
        int c=0;
        int sum=0;
       
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            sum+=it->first.first;
            c++;
            if(sum>=half)
            break;
        }
        
        return c;
        
    }
};
