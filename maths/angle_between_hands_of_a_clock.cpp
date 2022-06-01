class Solution {
public:
    double angleClock(int hour, int minutes) 
    {
        double min_angle=((minutes*1.0)/60.00)*360;
        
        double hr_angle=((minutes*1.0)/60.00)*30;
        
        if(hour!=12)
        hr_angle+=(30*hour);
        
        return min(abs(hr_angle-min_angle),360-abs(hr_angle-min_angle));
    }
};
