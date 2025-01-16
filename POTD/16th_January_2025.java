class Solution {
    public int maxLen(int[] arr) {
        // Your code here
        int n=arr.length;
        Map<Integer,Integer>mp=new HashMap<>();
        mp.put(0,-1);
        int res=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1)
            c++;
            else
            c--;
            if(mp.containsKey(c)){
                res=Math.max(res,i-mp.get(c));
            }
            else
            mp.put(c,i);
        }
        return res;
    }
}
