class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            auto it=st.upper_bound(nums[i]);
            auto it1=st.find(nums[i]);
            if(it!=st.end()&&it1==st.end())
            {
                st.erase(it);
                st.insert(nums[i]);
               
            }
            else
            st.insert(nums[i]);
        }
        return st.size();
    }
};
