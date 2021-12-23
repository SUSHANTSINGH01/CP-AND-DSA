class Solution {

public:

    int smallestRangeI(vector<int>& nums, int k) {

        

        int n=nums.size();

        int maxx=INT_MIN;

        int minn=INT_MAX;

        for(int i=0;i<n;i++)

        {

            maxx=max(maxx,nums[i]);

            minn=min(minn,nums[i]);

        }

        return max(0,maxx-minn-2*k);

    }

};
