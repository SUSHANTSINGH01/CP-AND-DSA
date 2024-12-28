class Solution {
    public List<List<Integer>> findTriplets(int[] arr) {
        // Your code here
        int n=arr.length;
        List<List<Integer>>ls = new ArrayList<>();
        Map<Integer,List<Integer>>mp = new HashMap<>();
        for(int i=0;i<n;i++){
            if(!mp.containsKey(arr[i])) {
                mp.put(arr[i], new ArrayList<>());
            }
            mp.get(arr[i]).add(i);
        }
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                List<Integer>lsTemp = new ArrayList<>();
                if(mp.containsKey(0-arr[i]-arr[j])){
                    for(int itr:mp.get(0-arr[i]-arr[j]))
                    if(itr>j){
                       ls.add(Arrays.asList(i,j,itr));
                    }
                }
            }
        }
        return ls;
    }
}
