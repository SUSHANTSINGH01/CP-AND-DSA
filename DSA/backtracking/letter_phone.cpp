    string arr[10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void dfs(string d,int i,string s,vector<string>&res)
    {
        if(i==d.size())
        {
            res.push_back(s);
            return;
        }
        for(char c:arr[d[i]-'0'])
        {
            s.push_back(c);
            dfs(d,i+1,s,res);
            s.pop_back();
        }
        
    }

vector<string> Solution::letterCombinations(string A) 
{
        vector<string>res;
        if(A.size()==0)
        return res;
        dfs(A,0,"",res);
        return res;
}
