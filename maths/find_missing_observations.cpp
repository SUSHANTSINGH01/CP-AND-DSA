class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) 
    {
        int n1=rolls.size();
        int m=n;
        int total=(m+n1)*mean;
        int rem=0;
        int sum=0;
        for(int i=0;i<n1;i++)
        sum+=rolls[i];
        
        rem=total-sum;
        
        int nor=rem/n;
        int tak=rem%n;
        int c=0;
        vector<int>res;
        if(nor>6 || (nor==6 && tak>0) || nor<=0)
        return res;
        while(tak>0)
        {
            if(6<=nor+tak)
            {
                res.push_back(6);
                tak=tak-(6-nor);
            }
            else
            {
                res.push_back(nor+tak);
                tak=0;
            }
            c++;
        }
        
        for(int i=c;i<n;i++)
        res.push_back(nor);
        
        return res;
    }
};
