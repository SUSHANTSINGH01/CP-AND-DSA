  bool islet(string &s)
    {
        int i=0;
        while(i<s.length() && s[i]!='-') 
        i++;
        
        i++;
        while(i<s.length() && s[i]!='-') 
        {
            if(s[i]>='0' && s[i]<='9') 
            return false;
            i++;
        }
        return true;
    }
    static bool comp(string a,string b) 
    {
        int i=0;
        while(i<a.length() && a[i]!='-') 
        i++;
        
        int j=0;
        while(j<b.length() && b[j]!='-') 
        j++;
        
        string first=a.substr(i+1);
        string second=b.substr(j+1);
        
        return first<second || (first==second && a<=b);
    }
vector<string> Solution::reorderLogs(vector<string> &A) 
{
        vector<string>let;
        vector<string>dig;
        
       
        for(int i=0;i<A.size();i++) 
        if(islet(A[i])) 
        let.push_back(A[i]);
        else
        dig.push_back(A[i]);
            
          
        sort(let.begin(),let.end(),comp);
        
        let.insert(let.end(),dig.begin(),dig.end());
        
        return let;
}
