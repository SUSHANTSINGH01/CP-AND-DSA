class Solution {
public:
    void wiggleSort(vector<int>& nums)
    {
        
        int n=nums.size();
        int l=0;
        int r=n/2;
        sort(nums.begin(),nums.end());
        if(n%2==1)
        r++;
        
        int r1=r;
        l=r-1;
        r=n-1;
        vector<int>ans;
        while(1)
        {
            if(l<0 and r<r1)
            break;
            if(l>=0)
            ans.push_back(nums[l--]);
            if(r>=r1)
            ans.push_back(nums[r--]);
        }
        for(int i=0;i<n;i++)
        nums[i]=ans[i];       
    }
};
