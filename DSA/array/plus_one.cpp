class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        vector<int>ans;
        int rem=1;
        for(int i=n-1;i>=0;i--)
        {
           ans.push_back((rem+digits[i])%10);
            rem=(rem+digits[i])/10;
        }
        if(rem==1)
        ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
