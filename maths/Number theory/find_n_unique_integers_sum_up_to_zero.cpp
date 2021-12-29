class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int>ans;
        int mid=n/2;
        
        while(mid>0)
        {
            ans.push_back(mid);
            ans.push_back(-mid);
            mid--;
        }
        
        if(n%2==1)
        ans.push_back(0);
        
        return ans;
    }
};
