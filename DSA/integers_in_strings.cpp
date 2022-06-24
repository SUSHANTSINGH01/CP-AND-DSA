vector<int> Solution::solve(string A) {
    
    int n=A.size();
    vector<int>res;
    string str="";
    for(int i=0;i<n;i++)
    {
        if(A[i]>='0' && A[i]<='9')
        str+=A[i];
        
        else if(A[i]==',')
        {
            res.push_back(stoi(str));
            str="";
        }
    }
    res.push_back(stoi(str));
    
    return res;
}
