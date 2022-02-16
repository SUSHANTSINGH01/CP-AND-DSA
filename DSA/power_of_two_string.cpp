bool not_one(string str) 
{ 
    int size1= str.size();
    if(size1>1)
    return 1;
    if(str[0]!='1')
    return 1;
    return 0;
}

bool is_even(string str) 
{ 
    int data=(str[str.size()-1] - '0') & 1; 
    if(data)                              
    return 0;                         
    return 1;                             
}

string Divide(string str, int data) 
{ 
    reverse(str.begin(), str.end());
    long long base = 10;
    string temp="";
    for(int i=str.size()-1,rem=0;i>=0;i--) 
    {
        long long cur=(str[i]-'0')+rem*base;
        int val=cur/data;
        rem=cur%data;
        temp+=(val+'0');
    }
    
    while(temp.size() && !(temp[0] - '0')) 
    temp.erase(temp.begin());      
                                          
    return temp;
}
int Solution::power(string A) 
{
    int size=A.size();
    if(size==1) 
    {
        if(A[0]=='2' || A[0]=='4' || A[0]=='8')
        return 1;
        return 0;
    } 
    else 
    {
        while(not_one(A) && is_even(A)) 
        {
            A=Divide(A, 2);
            if(A.size()==1 &&  A[0]=='1')
            break;
        }
        if(not_one(A))
        return 0;
        
        return 1;
    }
}
