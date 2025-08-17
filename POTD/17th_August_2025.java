class Pair implements Comparable<Pair>{
    int diff;
    int value;
    int ind;
    
    Pair(int diff, int value, int ind){
        this.diff = diff;
        this.value = value;
        this.ind = ind;
    }
    
    @Override
    public int compareTo(Pair pr){
        
        if(this.diff!=pr.diff)
        return this.diff-pr.diff;
        
        return this.ind-pr.ind;
    }
}

class Solution {
    
    public void rearrange(int[] arr, int x) {
        // code here
        PriorityQueue<Pair> pq = new PriorityQueue<>();
        
        int n = arr.length;
        
        for(int i=0;i<n;i++){
            pq.add(new Pair(Math.abs(arr[i]-x),arr[i],i));
        }
        
        for(int i=0;i<n;i++)
        arr[i] = pq.poll().value;
        
        return;
    }
}
