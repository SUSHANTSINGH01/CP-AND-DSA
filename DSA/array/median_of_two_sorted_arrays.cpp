class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size();
        int m=nums2.size();
        
        if(n>m)
        return findMedianSortedArrays(nums2,nums1);

        int limit=(n+m+1)/2;
        
        int l=0;
        int r=n;
        while(l<=r)
        {
            int mid1=(l+r)/2;
            int mid2=limit-mid1;
            
            int left1=mid1-1>=0?nums1[mid1-1]:INT_MIN;
            int left2=mid2-1>=0?nums2[mid2-1]:INT_MIN;
            int right1=mid1<n?nums1[mid1]:INT_MAX;
            int right2=mid2<m?nums2[mid2]:INT_MAX;
            
            if(left1<=right2 && left2<=right1)
            {
                if((n+m)&1)
                return (max(left1,left2))*1.0;

                return (max(left1,left2)+min(right1,right2 ))/2.0;
            }
            
            else if(left1>right2)
            r=mid1-1;   
            
            else 
            l=mid1+1;
            
        }
        return 0;
    }
};
