int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int>res;
    if(A.size()==0 || A.size()==1 || A.size()==2)
    return A.size();
    
    res.push_back(A[0]);
    res.push_back(A[1]);
    int ch1=A[0];
    int ch2=A[1];
    for(int i=2;i<A.size();i++)
    {
        if(A[i]==ch1 && A[i]==ch2)
        continue;

        else if(A[i]!=ch1 && A[i]!=ch2)
        {
            res.push_back(A[i]);
            ch1=A[i];
        }
        else if(A[i]==ch1 && ch2!=A[i])
        {
            res.push_back(A[i]);
            ch2=A[i];
        }
        else if(ch2==A[i] && ch1!=A[i])
        {
            res.push_back(A[i]);
            ch1=A[i];
        }
    }
    
    A.clear();
    for(int i=0;i<res.size();i++)
    A.push_back(res[i]);

    return res.size();

}
