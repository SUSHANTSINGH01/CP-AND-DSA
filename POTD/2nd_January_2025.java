class Solution {
    public int countSubarrays(int arr[], int k) {
        // code here
        int n=arr.length;
        HashMap<Integer,Integer>mp = new HashMap<>();
        int sum=0;
        int res=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k)
            res++;
            res+=mp.getOrDefault(sum-k,0);
            mp.put(sum,mp.getOrDefault(sum,0)+1);
        }
        return res;
    }
}
