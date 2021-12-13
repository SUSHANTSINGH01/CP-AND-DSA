class Solution {
public:
    long long countVowels(string word) 
    {
        long long int res=0;
        long long int n=word.size();
        
        for(long long int i=1;i<n-1;i++)
        {
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
            res=res+((n-i)*i)+(n-i);
            
        }
        if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
        res=res+((n));
        
        if(n>=2 && (word[n-1]=='a'||word[n-1]=='e'||word[n-1]=='i'||word[n-1]=='o'||word[n-1]=='u'))
        res=res+((n));
        
        
        return res;
        
        
    }
};
