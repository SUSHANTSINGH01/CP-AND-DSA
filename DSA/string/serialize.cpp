string Solution::serialize(vector<string> &A) 
{
    string str="";
    for(int i=0;i<A.size();i++)
    {
        str+=A[i]+ to_string(A[i].size()) + '~';
    }
    return str;
}
