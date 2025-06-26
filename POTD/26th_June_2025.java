class Solution {
    public int minValue(String s, int k) {
        // code here
        int[] freq = new int[26];
        
        Arrays.fill(freq,0);
        
        for(int i=0;i<s.length();i++)
        freq[s.charAt(i)-'a']++;
        
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        
        for(int i=0;i<26;i++)
        if(freq[i]>0)
        pq.add(freq[i]);
        
        while(!pq.isEmpty() && k>0){
            k--;
            int temp = pq.poll();
            pq.add(temp-1);
        }
        
        int res = 0;
        
        while(!pq.isEmpty()){
            int temp = pq.poll();
            res+=(temp*temp);
        }
        
        return res;
    }
}
