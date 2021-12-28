vector<int> Solution::getRow(int A) 
{
        vector<int>ans(A+1);
        if(A==0)
        {
            ans[0]=1;
            return ans;
        }
        int temp=1;
        ans[0]=1;
        for(int j=1;j<=A;j++)
        {
            ans[j]=(A-j+1)*temp/j;
            temp=ans[j];
        }
        return ans;
}
