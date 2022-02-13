class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
         int n=nums.size();
       
        vector<int>v;
        v.push_back(-1);
        for(int i=0;i<n;i++)
        if(nums[i]%2==1)
        v.push_back(i);
        v.push_back(n);
        
        int res=0;
        int n1=v.size();
        for(int j=1;j<n1-k;j++)
        res+=(v[j]-v[j-1])*(v[j+k]-v[j+k-1]);
                  
        return res;
    }
};
