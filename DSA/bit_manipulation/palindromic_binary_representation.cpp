int numm(string s)
{
    int num = 0;
  
    for(int i=0; i<s.size(); i++) 
    num=num*2+(s[i]-'0');

    return num;
}
int Solution::solve(int A) 
{
    
    if (A==1)
    return 1;
    queue<string>q;
    A--;
    q.push("11");
  
    while (!q.empty()) 
    {
        
        string temp = q.front();
        q.pop();
        A--;
  
        if (A==0) 
        return numm(temp);
        
       int mid=temp.size()/2;

        if (temp.size()%2 == 0) 
        {
            string str1 = temp;
            string str2 = temp;
            str1.insert(mid, "0");
            str2.insert(mid, "1");
            q.push(str1);
            q.push(str2);
        }
          
        else 
        {
            string ch(1, temp[mid]);
            string temp1 = temp;
            temp1.insert(mid, ch);
            q.push(temp1);
        }
    }
  
    return 0;
}
