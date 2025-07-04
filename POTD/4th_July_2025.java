class Solution {
    public int countAtMostK(int arr[], int k) {
        // code here
        
        int res = 0;
        Map<Integer, Integer> mp = new HashMap<>();
        int n = arr.length;
        int j=0;
        for(int i=0;i<n;i++){
            
            mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
            
            while(!mp.isEmpty() && mp.size()>k){
                if(mp.get(arr[j])<=1){
                    mp.remove(arr[j]);
                }else{
                    mp.put(arr[j],mp.get(arr[j])-1);
                }
                j++;
                
            }
            
            res+=(i-j+1);
            
            
        }
        
        return res;
        
    }
}
