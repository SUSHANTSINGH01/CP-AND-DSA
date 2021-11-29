vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B)
{
    int i=0;
    int j=0;

    vector<int>ans;
    while(i<=A.size()-1 && j<=B.size()-1)
    {
        if(A[i]==B[j])
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]>B[j])
        j++;
        else
        i++;
    }
    return ans;
}
