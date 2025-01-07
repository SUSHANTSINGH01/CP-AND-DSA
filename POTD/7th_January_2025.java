class Solution {

    int countPairs(int arr[], int target) {
        // Complete the function
        Map<Integer,Integer> mp = new HashMap<>();
        int n=arr.length;
        int res=0;
      //  mp.put(arr[0],1);
        for(int i=0;i<n;i++){
           mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
           if(mp.containsKey(target-arr[i]))
           res+=mp.get(target-arr[i]);
           
           if((target-arr[i])==arr[i])
           res--;
        }
        return res;
    }
}
