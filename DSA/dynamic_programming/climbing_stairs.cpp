class Solution {
public:
    int climbStairs(int n)
    {
        int temp1=1;
        int temp2=2;
        int res=0;
        if(n==1)
        return temp1;
        else if(n==2)
        return temp2;
        else
        {
            for(int i=3;i<=n;i++)
            {
                res=(temp1+temp2);
                temp1=temp2;
                temp2=res;
            }
            return res;
        }
    }
};
