class Solution {
    public ArrayList<Integer> topKFreq(int[] arr, int k) {
        // Code here
        Map<Integer, Integer> freq = new HashMap<>();
        
        for(int num : arr)
            freq.put(num, freq.getOrDefault(num, 0)+1);
        

        List<int[]> freqList = new ArrayList<>();
        
        for(Map.Entry<Integer, Integer> entry : freq.entrySet()) 
        freqList.add(new int[]{entry.getValue(), entry.getKey()});
        

        //Collections.sort(freqList, (a, b) -> Integer.compare(a[0], b[0]));
        Collections.sort(freqList, (a, b) -> {
            if(a[0] == b[0]) 
            return a[1] - b[1];
            
            return a[0] - b[0];      
        });
  
        int n = freqList.size();
        ArrayList<Integer> res = new ArrayList<>();
        
        
        for(int i = 0; i < k && i < n; i++) 
        res.add(freqList.get(n - 1 - i)[1]);
        

        return res;
    }
}
