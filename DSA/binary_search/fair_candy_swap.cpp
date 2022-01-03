class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum=0;
        int sum1=0;
        int total=0;
        unordered_map<int,int>mp;
        for(auto it:aliceSizes)
        {
            mp[it]++;
            sum+=it;
        }
        for(auto it:bobSizes)
        sum1+=it;
        total=sum+sum1;
        for(auto it:bobSizes)
        {
           
            int val=total/2-(sum1-it);
            if(mp.find(val)!=mp.end())
            return {val,it};
            
        }
        return {0,0};
    }
};
