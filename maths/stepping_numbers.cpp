void step(int A, int B, vector<int>&res, long long int num)
{
    if(num>B)
    return;
    
    int rem=num%10;
    
    if(num>=A)
    res.push_back(num);
    
    if(rem==0)
    step(A,B,res,num*10+1);
    
    else if(rem==9)
    step(A,B,res,num*10+8);
    
    else
    {
        step(A,B,res,num*10+rem-1);
        step(A,B,res,num*10+rem+1);
    }
}
vector<int>Solution::stepnum(int A, int B) 
{
    vector<int>res;
    vector<long long int>a;
    vector<long long int>b;
    
    if(A>B)
    return res;
    
    if(A==0)
    res.push_back(0);
    
    for(long long int i=1; i<10; i++)
    step(A, B, res,i);
    
    if(res.size()!=0)
    sort(res.begin(), res.end());
    
    return res;
}
