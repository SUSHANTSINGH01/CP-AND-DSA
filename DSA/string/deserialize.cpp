vector<string> Solution::deserialize(string A) 
{
    int n=A.size();
    string str="";
    vector<string>res;
    for(int i=0;i<n;i++)
    {
        if(A[i]>='a' && A[i]<='z')
        str+=A[i];

        else if(A[i]=='~')
        {
            if(str.size()!=0)
            res.push_back(str);
            str="";
        }
    }
 return res;
}
