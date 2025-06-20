class Solution {
    public boolean validgroup(int[] arr, int k) {
        // code here
        TreeMap<Integer,Integer> mp = new TreeMap<>();
        
        if(arr.length%k!=0) 
        return false;
        
        for(int i=0;i<arr.length;i++){
            mp.put(arr[i], mp.getOrDefault(arr[i],0)+1);
        }
        
         while(!mp.isEmpty()){
             
            int temp1=mp.firstKey();
            int count=mp.get(temp1);
            int c=0;
            
            if(count>0){
                
                while(!mp.isEmpty() && mp.containsKey(temp1) && mp.get(temp1)>0){
                    mp.remove(temp1);
                    temp1++;
                    c++;
                     
                }
                
                
                if(c%k!=0)
                return false;
            }
            
            
        }
        
        return true;
    }
}
