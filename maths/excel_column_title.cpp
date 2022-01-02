string Solution::convertToTitle(int A) 
{
    string str="";
    while(A>0)
    {
        int rem = A%26; 
        if (rem==0)
        { 
            str += 'Z'; 
            A = (A/26)-1; 
        } 
        else
        { 
            str += (rem-1) + 'A'; 
            A = A/26; 
        } 
    }
    reverse(str.begin(),str.end());
    return str;
    
}
