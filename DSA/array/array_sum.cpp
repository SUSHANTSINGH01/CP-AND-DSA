vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) 
{
    vector<int>res;
    int n=A.size();
    int m=B.size();
    int n1=n-1;
    int m1=m-1;
    int rem=0;
    for(int i=max(n,m);i>0;i--)
    {
        if(n1>=0 && m1>=0)
        {
             res.push_back((A[n1]+B[m1]+rem)%10);
             
            rem=(A[n1--]+B[m1--]+rem)/10;
        }
       else if(m1<0)
        {
            
            res.push_back((A[n1]+rem)%10);
            rem=(A[n1--]+rem)/10;
        }
        else if(n1<0)
        {
            res.push_back((B[m1]+rem)%10);
            rem=(B[m1--]+rem)/10;
        }
    }
    if(rem>0)
    res.push_back(rem);

   reverse(res.begin(),res.end());
    return res;
}
