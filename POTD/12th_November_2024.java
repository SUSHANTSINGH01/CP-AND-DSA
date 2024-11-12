class Solution {
    static boolean canAttend(int[][] arr) {
        // Your code here
        Map<Integer,Integer>mp=new TreeMap<>();

        for(int i=0;i<arr.length;i++) 
        mp.put(arr[i][0],arr[i][1]);

        int ind=0;
        int n=arr.length;
        int key[]=new int[n];

        for(int ele:mp.keySet())
        key[ind++]=ele;

        for(int i=0;i<n-1;i++){
            if((mp.get(key[i])<=key[i+1])) 
            continue;
            else 
            return false;

        }

        return true;
    }
}
