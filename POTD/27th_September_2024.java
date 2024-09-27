class Solution {
    // Function to find maximum of each subarray of size k.
    static class Pair{
        int value;
        int index;

        Pair(int value, int index){
            this.value = value;
            this.index = index;
        }
    }
    public ArrayList<Integer> max_of_subarrays(int k, int arr[]) {
        // Your code here
        
        PriorityQueue<Pair>pq = new PriorityQueue<>((a, b) -> b.value - a.value);
        ArrayList<Integer>res = new ArrayList<>();
        
        for(int i=0;i<k;i++)
        pq.offer(new Pair(arr[i],i));
        
        res.add(pq.peek().value);

        for(int i=k;i<arr.length;i++){
            pq.offer(new Pair(arr[i],i));
            while(pq.peek().index<=i-k){
                pq.poll();
            }
            res.add(pq.peek().value);
        }
        
        return res;
    }

}
