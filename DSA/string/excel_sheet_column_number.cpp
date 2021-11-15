class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int ans=(columnTitle[0]-'A')+1;
        cout<<ans;
        for(int i=1;i<columnTitle.size();i++)
        {
            ans*=26;
            ans+=(columnTitle[i]-'A')+1;
        }
        return ans;
            
    }
};
