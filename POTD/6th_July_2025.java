class Solution {
    
    
    public ArrayList<Integer> topKSumPairs(int[] a, int[] b, int k) {
        // code here
        int n = a.length;
        ArrayList<Integer> res=new ArrayList<>();
        
        Arrays.sort(a);
        Arrays.sort(b);
        
        for(int i=0;i<n/2;i++){
            int temp = a[n-1-i];
            a[n-1-i] = a[i];
            a[i] = temp;
            
            int temp1 = b[n-1-i];
            b[n-i-1] = b[i];
            b[i] = temp1;
        }
        
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        
        for(int i=0;i<n && i<k;i++){
            
            for(int j=0;j<n && j<k; j++){
                
               pq.add((a[i]+b[j]));
               
               if(pq.size()>k)
               pq.poll();
               
               if((a[i] + b[j])<pq.peek())
               break;
            }
            
            if((a[i]+b[0])<pq.peek())
            break;
        }
        
        while(!pq.isEmpty())
        res.add(pq.poll());
        
        Collections.reverse(res);
        
        return res;
    }
}
