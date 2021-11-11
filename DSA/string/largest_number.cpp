class Solution {
public:
    bool static solve(int a, int b)
    {
        string s1 = to_string(a);
        string s2 = to_string(b);
        return (s1 + s2) > (s2 + s1);
    }
    
    string largestNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(),solve);
        string ans="";
        for(int it : nums)
        {
            ans+=to_string(it);
            cout<<it<<" ";
        }
        while(ans[0] == '0' && ans.size()>1)
        ans=ans.substr(1);
        return ans;
    }
};
