public void nearlySorted(int[] arr, int k) {
        // code here
        
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int n = arr.length;
        int ind = 0;
        
        for(int i = 0; i <= k; i++)
        pq.add(arr[i]);
        
        for( int i = k+1; i < n; i++){
            arr[ind++] = pq.poll();
            pq.add(arr[i]);
        }
        
        while(!pq.isEmpty())
        arr[ind++] = pq.poll();
        
    }
