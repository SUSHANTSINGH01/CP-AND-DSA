class Solution {
public:
    bool reorderedPowerOf2(int n) 
    {
        vector<int>v(31);
        
        for(int i=0;i<31;i++)
        v[i]=pow(2,i);
        
        int n1=n;
        
        string str=to_string(n);
        int c=str.size();
        
        vector<int>vec(10);
        
        for(int i=0;i<c;i++)
        vec[str[i]-'0']++;
        
        for(int i=0;i<31;i++)
        {
            int temp=v[i];
            string s=to_string(temp);
            int c1=s.size();
            
            vector<int>vec1(10);
           
            for(int i=0;i<c1;i++)
            vec1[s[i]-'0']++;
            
            int f=false;
            for(int i=0;i<10;i++)
            {
                if(vec[i]!=vec1[i])
                f=1;
            }
            if(f==0)
            return true;
        }
        
        return false;
        
    }
};
