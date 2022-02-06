/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<pair<int,int>>vp;
    vector<Interval>res;
    int n=A.size();
    for(int i=0;i<n;i++)
    vp.push_back({A[i].start,A[i].end});

    sort(vp.begin(),vp.end());
    if(n<1)
    return res;
    int a=vp[0].first;
    int b=vp[0].second;
    int c=1;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            a=vp[i].first;
            b=vp[i].second;
        }
        else
        {
            if(b<vp[i].first)
            {
                res.push_back({a,b});
                a=vp[i].first;
                b=vp[i].second;
                c++;
            }
            else
            b=max(b,vp[i].second);
        }
    }
    if(a==vp[0].first)
    res.push_back({a,b});
    else if(c>res.size())
    res.push_back({a,b});
    
    return res;
}
