class Solution {
    public int longestCommonSum(int[] a1, int[] a2) {
        // Code here
       Map<Integer, Integer> mp = new HashMap<>();
       
       mp.put(0,-1);
       int sum=0;
       int n=a1.length;
       int res=0;
       
       for(int i=0;i<n;i++){
           sum+=(a1[i]-a2[i]);
           if(mp.containsKey(sum)){
               res=Math.max(res,i-mp.get(sum));
           }else
           mp.put(sum,i);
       }
       
       return res;
    }
}
