class Solution {
public:
    string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    void dfs(string d,int i,string s)
    {
        if(i==d.size())
        {
            ans.push_back(s);
            return;
        }
        for(char c:arr[d[i]-'0'])
        {
            s.push_back(c);
            dfs(d,i+1,s);
            s.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
        return ans;
        dfs(digits,0,"");
        return ans;
    }
};
