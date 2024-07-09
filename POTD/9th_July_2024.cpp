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


// Java Solution


class Solution {
    static int threeSumClosest(int[] array, int target) {
        // code here
        
        Arrays.sort(array);
        int closestDiff=2000000000;
        int closestSum=2000000000;
        for(int i=0;i<array.length-2;i++){
            int l=i+1;
            int r=array.length-1;
            while(l<r){
                int currentSum=array[i]+array[l]+array[r];
                int currentDiff=Math.abs(currentSum-target);
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
}
