int Solution::removeDuplicates(vector<int> &A) {
    int index=0; 
    for(int i=0;i<A.size();i++)
    {
        if(i+1<A.size() && A[i+1]==A[i]) 
        continue;
        else
        {
            A[index]=A[i];
            index++;
        }
    }
    
    A.erase(A.begin()+index,A.end());
    return A.size();
}
