vector<string> Solution::fullJustify(vector<string> &A, int B) {
    int n=A.size();
    vector<string> res;
    int c=0;
    int temp=0;
    
    for (short int i=0; i<n; i+=c)
    {
        c=0;
        temp=0;
        while (i+c<n && temp+c+A[i+c].size()<=B)
        {
            temp+=A[i+c].size();
            c++;
        }
        string tmp=A[i];
        
        for (int j=0; j<c-1; j++) 
        {
            if(i+c>=n) 
            tmp+=" ";
            else
            tmp+=string((B-temp)/(c-1)+(j<(B-temp)%(c-1)),' ');
            tmp+=A[i+j+1];
        }
        tmp+=string(B-tmp.size(), ' ');
        res.push_back(tmp);
    }
    return res;
}
