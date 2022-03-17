class Solution {
public:
    void solve(int n, int i, int sum, bool &res)
    {
        if(i>15 || sum>n)
        return;
        
        if(sum==n)
        {
            res=true;
            return;
        }
        
        solve(n,i+1,sum+pow(3,i),res);
        solve(n,i+1,sum,res);
    }
    
    bool checkPowersOfThree(int n)
    {
        bool res=false;
        solve(n,0,0,res);
        return res;
    }
};
