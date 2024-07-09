class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        
        sort(arr.begin(),arr.end());
        int closestDiff=INT_MAX;
        int closestSum=INT_MAX;
        for(int i=0;i<arr.size()-2;i++){
            int l=i+1;
            int r=arr.size()-1;
            while(l<r){
                int currentSum=arr[i]+arr[l]+arr[r];
                int currentDiff=abs(currentSum-target);
                if((currentDiff==closestDiff&&currentSum>closestSum)||currentDiff<closestDiff){
                    closestSum=currentSum;
                    closestDiff=currentDiff;
                }
                if(currentSum<target)
                l++;
                else
                r--;
            }
        }
        return closestSum;
    }
};
