int Solution::maxArea(vector<int> &A) 
{
         long long int maxx=0;
        long long int pres=0;
        int i=0;
        int j=A.size()-1;
        while(i<j)
        {
            if(A[i]<=A[j])
            {
                pres=(A[i])*(j-i);
                i++;
            }
            else
            {
                pres=(A[j])*(j-i);
                j--;
            }
            maxx=max(maxx,pres);
        }
        return maxx;
           
}
