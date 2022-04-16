/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool mycomp(Interval a,Interval b)
 {
     return a.start<b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) 
{
        intervals.push_back(newInterval);
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),mycomp);
        vector<Interval>res;
        res.push_back(intervals[0]);
        
       for(int i=1;i<n;i++)
       {
            if(intervals[i].start<=res[res.size()-1].end)
            res[res.size()-1].end=max(res[res.size()-1].end,intervals[i].end);
            else
            res.push_back(intervals[i]);
        }
        return res;  
}
