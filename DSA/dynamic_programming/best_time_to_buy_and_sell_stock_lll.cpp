int Solution::maxProfit(const vector<int> &A) 
{
    int fb=INT_MIN;
    int fs=INT_MIN;
    int sb=INT_MIN;
    int ss=INT_MIN;
    
    for(int i=0;i<A.size();i++)
    {
        fb=max(fb,-A[i]);
        fs=max(fs,A[i]+fb);
        sb=max(sb,fs-A[i]);
        ss=max(ss,A[i]+sb);
    }
    return ss;
    
}
