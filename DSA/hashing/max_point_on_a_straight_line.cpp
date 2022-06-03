int gcd(int a, int b)
{
    return b==0?a:gcd(b,a%b);   
}
int Solution::maxPoints(vector<int> &A, vector<int> &B) 
{
    int res=0;
    int n=A.size();
    
    for(int i=0; i<n; i++)
    {
        map<pair<int,int>,int>mp;
        int c=1;
        int maxx=0;
        for(int j=i+1;j<n;j++)
        {
            int diff_x=A[i]-A[j];
            int diff_y=B[i]-B[j];
            
            if(diff_x==0 && diff_y==0)
            {
                c++;
                continue;
            }
            
            if (diff_x<0)
            {
                diff_x*=-1;
                diff_y*=-1;
            }
            
            int temp=gcd(diff_x, diff_y);
            mp[make_pair(diff_x/temp, diff_y/temp)]++;
            maxx=max(maxx,mp[{diff_x/temp, diff_y/temp}]);
        }
        maxx+=c;
        res=max(maxx,res);
    }
    return res;
}
