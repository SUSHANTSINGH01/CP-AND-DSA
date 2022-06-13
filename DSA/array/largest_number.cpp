int cmp(string X, string Y)
{
    string new_x=X.append(Y);
    string new_y=Y.append(X);
    return new_x>new_y;
}
string Solution::largestNumber(const vector<int> &A) 
{
    vector<string>str;
    string res;
    for(int i=0;i<A.size();i++)
    str.push_back(to_string(A[i]));
    
    sort(str.begin(),str.end(),cmp);
    
    for(int i=0;i<A.size();i++)
    res+=str[i];
    
    int i=0;
    while(res[i]=='0')
    i++;
    
    if(i==A.size())
    res="0";
    
    return res;  
}
