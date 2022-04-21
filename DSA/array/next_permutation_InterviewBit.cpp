vector<int> Solution::nextPermutation(vector<int> &A) 
{
        int i=0;
        if(A.size()<=1)
        return A;
        for(i=A.size()-1; i>0; i--)
        {       
            if(A[i]>A[i-1])
            break;
        }
        if(i==0)
        reverse(A.begin(), A.end());    
        else 
        {
            int temp=A[i-1];
            int swp=i;           
            for(int j=i+1; j<A.size(); j++)
            {    
                if(A[j]>temp && A[j]<=A[swp])
                swp=j;
            }
            swap(A[i-1], A[swp]);        
            sort(A.begin()+i, A.end());     
        }
        return A;
}
