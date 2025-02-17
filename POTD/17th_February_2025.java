class Solution {
    public ArrayList<Integer> kLargest(int[] arr, int k) {
        // Your code here
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        
        for(int i=0;i<arr.length;i++){
            pq.add(arr[i]);
            if(pq.size()>k){
                pq.poll();
            }
        }
        
        ArrayList<Integer> list = new ArrayList<>();
        
        while(!pq.isEmpty()){
            list.add(pq.poll());
        }
        
        Collections.reverse(list);
        
        return list;
    }
}
