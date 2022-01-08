int Solution::bulbs(vector<int> &A) 
{
    int c=0;
    int o=1;
    
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]==0)
        {
            if(o==1)
            {
                c++;
                o=0;
            }
        }
        else
        {
            if(o==0)
            {
                c++;
                o=1;
            }
        }
    }
    return c;

}
