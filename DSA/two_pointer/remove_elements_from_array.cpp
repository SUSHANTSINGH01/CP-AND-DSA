int Solution::removeElement(vector<int> &A, int B) {
   
    int n=A.size();
    int i=0;
    int j=0;
    while(i<n)
    {
        if(A[i]==B)
        {
            j=max(j,i+1);
            while(j<n && A[j]==B)
            j++;
            
            if(j<n)
            swap(A[i],A[j]);
            
            else
            break;
            
        }
        i++;
    }
    A.erase(A.begin()+i,A.end());
    return A.size();

}
