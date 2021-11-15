class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            auto it = st.lower_bound(nums[i]);
           
            if(it==st.end())
            st.insert(nums[i]);
            else
            {
                st.erase(it);
                st.insert(nums[i]);
            }
            
            if(st.size()>=3)
            return 1;
            
        }
        return 0;
    }
};
