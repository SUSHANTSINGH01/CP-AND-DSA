bool compare(struct val a,struct val b)
{
    return a.second<b.second;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p,p+n,compare);
    int c=1;
    int prev=p[0].second;
    for(int i=1;i<n;i++)
    {
        if(p[i].first>prev)
        {
            prev=p[i].second; 
            c++;
        }
        
    }
    return c;
}
