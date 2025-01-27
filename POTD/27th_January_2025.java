class LRUCache {
    
    private static Map<Integer, Integer>mp;
    private static Map<Integer, Integer>priority;
    private static Queue<Integer>q;
    private static int length;
    
    private static void addQueue(int key) {
        q.add(key);
        priority.put(key, priority.getOrDefault(key, 0) + 1);
    }
    
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) {
        // code here
        mp=new HashMap<>();
        priority=new HashMap<>();
        q=new LinkedList<>();
        length=cap;
    }

    // Function to return value corresponding to the key.
    public static int get(int key){
         if(!mp.containsKey(key)){
            return -1;
        }
        addQueue(key);
        return mp.get(key);
    }

    // Function for storing key-value pair.
    public static void put(int key, int value) {
        // your code here
        
        if(mp.size()<length){
            mp.put(key,value);
            addQueue(key);
            return;
        }
        
        // if cache is full & contains key
        if(mp.containsKey(key)){
            mp.put(key, value);
            addQueue(key);
            return;
        }

        // if cache is full & does not contain key
        while(true){
            int cur=q.poll();
            priority.put(cur, priority.get(cur)-1);
            if(priority.get(cur)==0){
                mp.remove(cur);
                break;
            }
        }
        
        mp.put(key, value);
        addQueue(key);
    }
}
