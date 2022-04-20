int Solution::lPalin(ListNode* A) 
{
    vector<int>vec;
    while(A)
    {
        vec.push_back(A->val);
        A=A->next;
    }

    int n=vec.size();
    for(int i=0;i<n/2;i++)
    if(vec[i]!=vec[n-1-i])
    return 0;

    return 1;
}
