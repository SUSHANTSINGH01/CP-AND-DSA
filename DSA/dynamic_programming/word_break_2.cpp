vector<string> solve(const string& A, const vector<string>& B,unordered_map<string, vector<string>>&arr)
{
    int n=A.size();
    vector<string>res;
   // if A is present in arr
    if(arr.count(A))
    return arr[A];
    
    for(int i=1; i<=n; i++) 
    {
        string str=A.substr(0,i);
        string rem=A.substr(i);
        if(find(B.begin(), B.end(), str)!=B.end()) 
        {
            if(rem.empty()) 
            res.push_back(str);
            
            else 
            {
                for(auto& s: solve(rem, B, arr)) 
                res.push_back(str + " " + s);
            }
        }
    }
    arr[A]=res;
    return res;
}
vector<string> Solution::wordBreak(string A, vector<string> &B) 
{  
    
    unordered_map<string, vector<string>>arr;
    return solve(A, B, arr);
   
}
