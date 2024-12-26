class Solution {
    boolean twoSum(int arr[], int target) {
        // code here
        Map<Integer,Integer> mp = new HashMap<>();
        int n=arr.length;
        for(int i=0;i<n;i++){
            if(mp.containsKey(target-arr[i]) && mp.get(target-arr[i])>=1)
            return true;
            mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
        }
        return false;
    }
}
