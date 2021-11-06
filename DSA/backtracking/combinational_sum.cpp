class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>>ans;
    void func(vector<int>&v,int b,vector<int>temp,int sum,int k)
    {
        if(sum==b)
        {
            ans.push_back(temp);
            return;
        }
        if(sum>b)
        return;
        if(sum<b)
        {
            for(int i=k;i<v.size();i++)
            {
                temp.push_back(v[i]);
                func(v,b,temp,sum+v[i],i);
                temp.pop_back();
            }
        }
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
       
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        func(A,B,{},0,0);
        return ans;
    }
};
