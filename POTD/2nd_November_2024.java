class Solution {
    public boolean checkDuplicatesWithinK(int[] arr, int k) {
        // your code
        HashSet<Integer> st=new HashSet<>();
        int j=0;
        int n=arr.length;
        for(int i=0;i<k;i++){
            if(st.contains(arr[i]))
            return true;
            st.add(arr[i]);
        }
        
        for(int i=k;i<n;i++){
            if(st.contains(arr[i]))
            return true;
            st.remove(arr[j++]);
            st.add(arr[i]);
        }
        
        return false;
    }
    
}
