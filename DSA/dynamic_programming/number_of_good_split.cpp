class Solution {
public:
    int numSplits(string s) 
    {
       
        unordered_map<char, int> left;
        unordered_map<char, int> right;
        
        for(int i=0; i<s.length(); i++)
        right[s[i]]++;
        
        
        int rightS = right.size();
         int ans=0;
        for(int i=0; i<s.length(); i++)
        {
            left[s[i]]++;
            right[s[i]]--;
			
            if(right[s[i]] == 0)
            rightS--;
				
            if(left.size() == rightS)
            ans++;
        }
        
        return ans;
    }
};
